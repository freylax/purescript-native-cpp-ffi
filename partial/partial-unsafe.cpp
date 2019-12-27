#include "purescript.h"

// Tested with package v2.0.0

using namespace purescript;

extern "C" auto PS_Partial_Unsafe_unsafePartial() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return f(boxed());
  };
  return _;
};


