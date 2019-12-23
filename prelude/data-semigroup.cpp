#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Semigroup_concatString() -> boxed {
  static const boxed _ = [](const boxed& s1) -> boxed {
    return [=](const boxed& s2) -> boxed {
      return unbox<string>(s1) + unbox<string>(s2);
    };
  };
  return _;
};

extern "C" auto PS_Data_Semigroup_concatArray() -> boxed {
  static const boxed _ = [](const boxed& xs) -> boxed {
    return [=](const boxed& ys_) -> boxed {
      array_t result(unbox<array_t>(xs)); // makes a copy
      const auto& ys = unbox<array_t>(ys_);
      result.insert(result.end(), ys.cbegin(), ys.cend());
      return result;
    };
  };
  return _;
};


