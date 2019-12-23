#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Unit_unit() -> boxed {
  static const boxed _ = boxed();
  return _;
};


