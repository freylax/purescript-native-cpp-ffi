#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;


extern "C" auto PS_Data_Foldable_foldrArray() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& init) -> boxed {
      return [=](const boxed& xs_) -> boxed {
	auto acc = init;
	const auto& xs = unbox<array_t>(xs_);
	for (auto it = xs.crbegin(), end = xs.crend(); it != end ; it++) {
	  acc = f(*it)(acc);
	}
	return acc;
      };
    };
  };
  return _;
};

extern "C" auto PS_Data_Foldable_foldlArray() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& init) -> boxed {
      return [=](const boxed& xs_) -> boxed {
	auto acc = init;
	const auto& xs = unbox<array_t>(xs_);
	for (auto it = xs.cbegin(), end = xs.cend(); it != end ; it++) {
	  acc = f(acc)(*it);
	}
	return acc;
      };
    };
  };
  return _;
};


