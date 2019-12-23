#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_HeytingAlgebra_boolConj() -> boxed {
  static const boxed _ = [](const boxed& b1_) -> boxed {
    const auto b1 = unbox<bool>(b1_);
    return [=](const boxed& b2) -> boxed {
      return b1 && unbox<bool>(b2);
    };
  };
  return _;
};

extern "C" auto PS_Data_HeytingAlgebra_boolDisj() -> boxed {
  static const boxed _ = [](const boxed& b1_) -> boxed {
    const auto b1 = unbox<bool>(b1_);
    return [=](const boxed& b2) -> boxed {
      return b1 || unbox<bool>(b2);
    };
  };
  return _;
};

extern "C" auto PS_Data_HeytingAlgebra_boolNot() -> boxed {
  static const boxed _ = [](const boxed& b) -> boxed {
    return !unbox<bool>(b);
  };
  return _;
};


