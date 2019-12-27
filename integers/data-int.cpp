#include <cmath>
#include <cassert>
#include <limits>
#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Int_toNumber() -> const boxed& {
  static const boxed _ = [](const boxed& n) -> boxed {
    return static_cast<double>(unbox<int>(n));
  };
  return _;
};

extern "C" auto PS_Data_Int_pow() -> const boxed& {
  static const boxed _ = [](const boxed& n_) -> boxed {
    const auto n = unbox<int>(n_);
    return [=](const boxed& p) -> boxed {
      const auto r = std::lround(std::pow(n, unbox<int>(p)));
      assert(r >= std::numeric_limits<int>::min() &&
	     r <= std::numeric_limits<int>::max());
      return static_cast<int>(r);
    };
  };
  return _;
};


