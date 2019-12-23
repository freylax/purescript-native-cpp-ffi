#include "purescript.h"

// Tested with package v2.0.0

using namespace purescript;

extern "C" auto PS_Effect_pureE() -> boxed {
  static const boxed _ = [](const boxed& a) -> boxed {
    return [=]() -> boxed {
      return a;
    };
  };
  return _;
};

extern "C" auto PS_Effect_bindE() -> boxed {
  static const boxed _ = [](const boxed& a) -> boxed {
    return [=](const boxed& f) -> boxed {
      return [=]() -> boxed {
	return f(a())();
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_foreachE() -> boxed {
  static const boxed _ = [](const boxed& as_) -> boxed {
    return [=](const boxed& f) -> boxed {
      return [=]() -> boxed {
	const auto& as = unbox<array_t>(as_);
	for (auto it = as.cbegin(), end = as.cend(); it != end ; it++) {
	  f(*it)();
	}
	return boxed();
      };
    };
  };
  return _;
};


