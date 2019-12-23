#include <cmath>
#include "purescript.h"

// Tested with package v2.1.1

using namespace purescript;

extern "C" auto PS_Math_abs() -> boxed {
  static const boxed _ = [](const boxed& x) -> boxed {
    return std::fabs(unbox<double>(x));
  };
  return _;
};

extern "C" auto PS_Math_pow() -> boxed {
  static const boxed _ = [](const boxed& n_) -> boxed {
    const auto n = unbox<double>(n_);
    return [=](const boxed& p) -> boxed {
      return std::pow(n, unbox<double>(p));
    };
  };
  return _;
};


