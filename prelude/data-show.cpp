#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Show_showIntImpl() -> const boxed& {
  static const boxed _ =[](const boxed& n_) -> boxed {
    const auto& n = unbox<int>(n_) ;
    return std::to_string( n);
  };
  return _;
};

extern "C" auto PS_Data_Show_showNumberImpl() -> const boxed& {
  static const boxed _ = [](const boxed& n) -> boxed {
    return std::to_string(unbox<double>(n));
  };
  return _;
};

extern "C" auto PS_Data_Show_showStringImpl() -> const boxed& {
  static const boxed _ = [](const boxed& s) -> boxed {
    return "\"" + unbox<string>(s) + "\"";
  };
  return _;
};

extern "C" auto PS_Data_Show_showCharImpl() -> const boxed& {
  static const boxed _ = [](const boxed& s) -> boxed {
    return "'" + unbox<string>(s) + "'";
  };
  return _;
};

extern "C" auto PS_Data_Show_showArrayImpl() -> const boxed& {
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

extern "C" auto PS_Data_Show_cons() -> const boxed& {
  static const boxed _ = [](const boxed& head_) -> boxed {
    return [=](const boxed& tail_) -> boxed {
      auto tail = unbox<array_t>( tail_);
      tail.insert( tail.begin(), head_);
      return tail;
    };
  };
  return _;
};

extern "C" auto PS_Data_Show_join() -> const boxed& {
  static const boxed _ = [](const boxed& separator_) -> boxed {
    return [=](const boxed& xs_) -> boxed {
      const auto& separator = unbox<string>(separator_);
      const auto& xs = unbox<array_t>(xs_);
      string s;
      auto count = xs.size();
      for (auto it = xs.cbegin(), end = xs.cend(); it != end; it++) {
        s.append(unbox<string>(*it));
        if (--count > 0) {
          s.append(separator);
        }
      }
      return s;
    };
  };
  return _;
};

