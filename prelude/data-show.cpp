#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Show_showIntImpl() -> boxed {
  static const boxed _ = [](const boxed& n) -> boxed {
    return std::to_string(unbox<int>(n));
  };
  return _;
};

extern "C" auto PS_Data_Show_showNumberImpl() -> boxed {
  static const boxed _ = [](const boxed& n) -> boxed {
    return std::to_string(unbox<double>(n));
  };
  return _;
};

extern "C" auto PS_Data_Show_showStringImpl() -> boxed {
  static const boxed _ = [](const boxed& s) -> boxed {
    return "\"" + unbox<string>(s) + "\"";
  };
  return _;
};

extern "C" auto PS_Data_Show_showArrayImpl() -> boxed {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& xs_) -> boxed {
      const auto& xs = unbox<array_t>(xs_);
      string s("[");
      auto count = xs.size();
      for (auto it = xs.cbegin(), end = xs.cend(); it != end; it++) {
        s.append(unbox<string>(f(*it)));
        if (--count > 0) {
          s.push_back(',');
        }
      }
      s.push_back(']');
      return s;
    };
  };
  return _;
};


