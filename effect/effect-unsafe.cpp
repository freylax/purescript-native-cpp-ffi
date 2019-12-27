#include "purescript.h"

// Tested with package v2.0.0

using namespace purescript;

extern "C" auto PS_Effect_Unsafe_unsafePerformEffect() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return fn();
  };
  return _;
};
