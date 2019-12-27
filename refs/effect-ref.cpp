#include "purescript.h"

// Tested with package v4.1.0

using namespace purescript;

extern "C" auto PS_Effect_Ref_new() -> const boxed& {
  static const boxed _ = [](const boxed& val) -> boxed {
    return [=]() -> boxed {
      return dict_t{ {"value", val} };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Ref_read() -> const boxed& {
  static const boxed _ = [](const boxed& ref) -> boxed {
    return [=]() -> boxed {
      return ref["value"];
    };
  };
  return _;
};

extern "C" auto PS_Effect_Ref_modifyPrime_() -> const boxed& {
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

extern "C" auto PS_Effect_Ref_write() -> const boxed& {
  static const boxed _ =  [](const boxed& val) -> boxed {
    return [=](const boxed& ref) -> boxed {
      return [=]() -> boxed {
	dict_t& mutableRef = *static_cast<dict_t*>(ref.get());
	return mutableRef["value"] = val;
      };
    };
  };
  return _;
};


