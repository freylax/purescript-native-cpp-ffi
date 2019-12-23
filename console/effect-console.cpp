#include <iostream>
#include "purescript.h"

// Tested with package v4.1.0

using namespace purescript;

extern "C" auto PS_Effect_Console_log() -> boxed {
  static const boxed _ = [](const boxed& s) -> boxed {
    return [=]() -> boxed {
      std::cout << unbox<string>(s) << std::endl;
      return boxed();
    };
  };
  return _;
};

extern "C" auto PS_Effect_Console_warn() -> boxed {
  static const boxed _ = [](const boxed& s) -> boxed {
    return [=]() -> boxed {
      std::cout << unbox<string>(s) << std::endl;
      return boxed();
    };
  };
  return _;
};


