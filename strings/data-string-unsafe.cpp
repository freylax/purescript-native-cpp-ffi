#include "utf8.h"
#include "purescript.h"

// Tested with package v4.0.1

using namespace purescript;

extern "C" auto PS_Data_String_Unsafe_charAt() -> const boxed& {
  static const boxed _ = [](const boxed& i_) -> boxed {
    const auto i = unbox<int>(i_);
    return [=](const boxed& s_) -> boxed {
      const char * s = unbox<string>(s_).c_str();
      const auto len = utf8len(s);
      if (i >= 0 && i < len) {
	utf8_int32_t n = 0;
	const char * codepoint = (char *)utf8codepoint(s, &n);
	for (int count = 0; codepoint != nullptr and n != 0; count++) {
	  if (count == i) {
	    return string(s, codepoint - s);
	  }
	  s = codepoint;
	  codepoint = (char *)utf8codepoint(s, &n);
	}
      }
      THROW_("Data.String.Unsafe.charAt: Invalid index.");
    };
  };
  return _;
};

extern "C" auto PS_Data_String_Unsafe_char() -> const boxed& {
  static const boxed _ = [](const boxed& s_) -> boxed {
    const auto& s = unbox<string>(s_);
    const auto len = utf8len(s.c_str());
    if (len == 1) {
      return s;
    }
    THROW_("Data.String.Unsafe.char: Expected string of length 1.");
  };
  return _;
};


