#include "purescript.h"

// Tested with package v4.?.?

namespace Data_Ord {
    using namespace purescript;
    template <typename T>
    static auto ordImpl(const boxed& lt) -> boxed {
        return [=](const boxed& eq) -> boxed {
            return [=](const boxed& gt) -> boxed {
                return [=](const boxed& x_) -> boxed {
                    const auto x = unbox<T>(x_);
                    return [=](const boxed& y_) -> boxed {
                        const auto y = unbox<T>(y_);
                        return x < y ? lt : x == y ? eq : gt;
                    };
                };
            };
        };
    }
}

using namespace purescript;

extern "C" auto PS_Data_Ord_ordBooleanImpl() -> boxed {
  static const boxed _ = Data_Ord::ordImpl<bool>;
  return _;
};
extern "C" auto PS_Data_Ord_ordIntImpl() -> boxed {
  static const boxed _ = Data_Ord::ordImpl<int>;
  return _;
};
extern "C" auto PS_Data_Ord_ordNumberImpl() -> boxed {
  static const boxed _ = Data_Ord::ordImpl<double>;
  return _;
};
extern "C" auto PS_Data_Ord_ordStringImpl() -> boxed {
  static const boxed _ = Data_Ord::ordImpl<string>;
  return _;
};
extern "C" auto PS_Data_Ord_ordCharImpl() -> boxed {
  static const boxed _ = Data_Ord::ordImpl<string>;
  return _;
};


