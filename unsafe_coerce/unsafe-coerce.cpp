#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Unsafe_Coerce_unsafeCoerce() -> const boxed& {
  static const boxed _ = [](const boxed& x) -> boxed {
    return x;
  };
  return _;
};


