#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Semiring_intAdd() -> const boxed& {
  static const boxed _ = [](const boxed& x_) -> boxed {
    const auto x = unbox<int>(x_);
    return [=](const boxed& y_) -> boxed {
      const auto y = unbox<int>(y_);
      return x + y;
    };
  };
  return _;
};

extern "C" auto PS_Data_Semiring_intMul() -> const boxed& {
  static const boxed _ = [](const boxed& x_) -> boxed {
    const auto x = unbox<int>(x_);
    return [=](const boxed& y_) -> boxed {
      const auto y = unbox<int>(y_);
      return x * y;
    };
  };
  return _;
};

extern "C" auto PS_Data_Semiring_numAdd() -> const boxed& {
  static const boxed _ = [](const boxed& x_) -> boxed {
    const auto x = unbox<double>(x_);
    return [=](const boxed& y_) -> boxed {
      const auto y = unbox<double>(y_);
      return x + y;
    };
  };
  return _;
};

extern "C" auto PS_Data_Semiring_numMul() -> const boxed& {
  static const boxed _ = [](const boxed& x_) -> boxed {
    const auto x = unbox<double>(x_);
    return [=](const boxed& y_) -> boxed {
      const auto y = unbox<double>(y_);
      return x * y;
    };
  };
  return _;
};


