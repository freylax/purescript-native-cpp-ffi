#include <exception>
#include <string>
#include "purescript.h"

// Tested with package v2.0.0

using namespace purescript;

extern "C" auto PS_Effect_Exception_showErrorImpl() -> const boxed& {
  static const boxed _ = [](const boxed& e_) -> boxed {
    return std::string( unbox<std::exception>( e_).what());
  };
  return _;
};

extern "C" auto PS_Effect_Exception_error() -> const boxed& {
  static const boxed _ = [](const boxed& s_) -> boxed {
    return box<std::runtime_error>( unbox<string>( s_));
  };
  _;
};

extern "C" auto PS_Effect_Exception_message() -> const boxed& {
  static const boxed _ = [](const boxed& e_) -> boxed {
    return std::string( unbox<std::exception>( e_).what());
  };
  return _;
};

extern "C" auto PS_Effect_Exception_name() -> const boxed& {
  static const boxed _ = [](const boxed& e_) -> boxed {
    return std::string( "Error");
  };
  return _;
};

extern "C" auto PS_Effect_Exception_stackImpl() -> const boxed& {
  static const boxed _ = [](const boxed& just_) -> boxed {
    return [=](const boxed& nothing_) -> boxed {
      return [=](const boxed& e_) -> boxed {
	return nothing_;
      };
    };	
  };
  return _;
};

extern "C" auto PS_Effect_Exception_throwException() -> const boxed& {
  static const boxed _ = [](const boxed& e_) -> boxed {
    const auto& e = unbox<std::exception>(e_);
    throw e;
  };
  return _;
};

extern "C" auto PS_Effect_Exception_catchException() -> const boxed& {
  static const boxed _ = [](const boxed& c) -> boxed {
    return [=](const boxed& t) -> boxed {
      return [=]() -> boxed {
	try {
	  return t();
	} catch ( const std::runtime_error& e) {
	  return c( box<std::runtime_error>( e))();
	}
      };
    };
  };
  return _;
};
