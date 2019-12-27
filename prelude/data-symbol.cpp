#include "purescript.h"

using namespace purescript;

extern "C" auto PS_Data_Symbol_unsafeCoerce() -> const boxed& {
  static const boxed _ = [](const boxed& a) -> boxed {
    return a;
  };
  return _;
};

