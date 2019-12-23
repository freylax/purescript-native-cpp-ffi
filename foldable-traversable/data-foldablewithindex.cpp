#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_FunctorWithIndex_mapWithIndexArray() -> boxed {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& xs_) -> boxed {
      const auto& xs = unbox<array_t>(xs_);
      array_t result;
      int i = 0;
      for (auto it = xs.cbegin(), end = xs.cend(); it != end ; it++, i++) {
	result.push_back(f(i)(*it));
      }
      return result;
    };
  };
  return _;
};


