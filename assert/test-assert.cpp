#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Test_Assert_assertPrime_() -> const boxed& {
  static const boxed _ = [](const boxed& message) -> boxed {
    return [=](const boxed& success_) -> boxed {
      const auto success = unbox<bool>(success_);
      return [=]() -> boxed {
	if (!success) throw std::runtime_error(unbox<string>(message));
	return boxed();
      };
    };
  };
  return _;
};


