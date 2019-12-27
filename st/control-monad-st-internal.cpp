#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Control_Monad_ST_Internal_map_() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=]() -> boxed {
	return f(a());
      };
    };
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_bind_() -> const boxed& {
  static const boxed _ = [](const boxed& a) -> boxed {
    return [=](const boxed& f) -> boxed {
      return [=]() -> boxed {
	return f(a())();
      };
    };
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_run() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return f();
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_while() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=]() -> boxed {
	while (unbox<bool>(f())) {
	  a();
	}
	return boxed();
      };
    };
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_new() -> const boxed& {
  static const boxed _ = [](const boxed& val) -> boxed {
    return [=]() -> boxed {
      return dict_t{{ "value", val }};
    };
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_read() -> const boxed& {
  static const boxed _ = [](const boxed& ref) -> boxed {
    return [=]() -> boxed {
      return ref["value"];
    };
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_modifyPrime_() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& ref) -> boxed {
      return [=]() -> boxed {
	boxed t = f(ref["value"]);
	dict_t& mutableRef = *static_cast<dict_t*>(ref.get());
	mutableRef["value"] = t["state"];
	return t["value"];
      };
    };
  };
  return _;
};

extern "C" auto PS_Control_Monad_ST_Internal_write() -> const boxed& {
  static const boxed _ =  [](const boxed& a) -> boxed {
    return [=](const boxed& ref) -> boxed {
      return [=]() -> boxed {
	dict_t& mutableRef = *static_cast<dict_t*>(ref.get());
	return mutableRef["value"] = a;
      };
    };
  };
  return _;
};


