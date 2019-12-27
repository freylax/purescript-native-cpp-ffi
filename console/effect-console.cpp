#include <iostream>
#include <chrono>
#include "purescript.h"

// Tested with package v4.1.0

using namespace purescript;

extern "C" auto PS_Effect_Console_log() -> const boxed& {
  static const boxed _ = [](const boxed& s) -> boxed {
    return [=]() -> boxed {
      std::cout << unbox<string>(s) << std::endl;
      return boxed();
    };
  };
  return _;
};

extern "C" auto PS_Effect_Console_warn() -> const boxed& {
  static const boxed _ = [](const boxed& s) -> boxed {
    return [=]() -> boxed {
      std::cout << unbox<string>(s) << std::endl;
      return boxed();
    };
  };
  return _;
};

extern "C" auto PS_Effect_Console_error() -> const boxed& {
  static const boxed _ = [](const boxed& s) -> boxed {
    return [=]() -> boxed {
      std::cerr << unbox<string>(s) << std::endl;
      return boxed();
    };
  };
  return _;
};

extern "C" auto PS_Effect_Console_info() -> const boxed& {
  static const boxed _ = [](const boxed& s) -> boxed {
    return [=]() -> boxed {
      std::cout << unbox<string>(s) << std::endl;
      return boxed();
    };
  };
  return _;
};

namespace {
  static _template_::dict_t< std::chrono::time_point< std::chrono::steady_clock> > namedTimer;
}

extern "C" auto PS_Effect_Console_time() -> const boxed& {
  static const boxed _ = [](const boxed& n_) -> boxed {
    return [=]() -> boxed {
      namedTimer[unbox<string>(n_).c_str()] = std::chrono::steady_clock::now();
      return boxed();
    };
  };
  return _;
};

extern "C" auto PS_Effect_Console_timeEnd() -> const boxed& {
  static const boxed _ = [](const boxed& n_) -> boxed {
    return [=]() -> boxed {
      auto end = std::chrono::steady_clock::now();
      auto start = namedTimer[ unbox<string>(n_).c_str()];
      std::chrono::duration<double> diff = end-start;
      std::cout << diff.count() * 1000.0;
      return boxed();
    };
  };
  return _;
};

