#include "purescript.h"

// Tested with package v2.0.0

using namespace purescript;

extern "C" auto PS_Data_Ord_Unsafe_unsafeCompareImpl() -> const boxed& {
  static const boxed _ = boxed();
  THROW_("Effect_Data_Ord_Unsafe_unsafeCompareImpl can not be implemented");
  return _;
};
