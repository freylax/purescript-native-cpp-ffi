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

extern "C" auto PS_Data_Ord_ordBooleanImpl() -> const boxed& {
  static const boxed _ = Data_Ord::ordImpl<bool>;
  return _;
};
extern "C" auto PS_Data_Ord_ordIntImpl() -> const boxed& {
  static const boxed _ = Data_Ord::ordImpl<int>;
  return _;
};
extern "C" auto PS_Data_Ord_ordNumberImpl() -> const boxed& {
  static const boxed _ = Data_Ord::ordImpl<double>;
  return _;
};
extern "C" auto PS_Data_Ord_ordStringImpl() -> const boxed& {
  static const boxed _ = Data_Ord::ordImpl<string>;
  return _;
};
extern "C" auto PS_Data_Ord_ordCharImpl() -> const boxed& {
  static const boxed _ = Data_Ord::ordImpl<string>;
  return _;
};

extern "C" auto PS_Data_Ord_ordArrayImpl() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=]( const boxed& xs_) -> boxed {
      return [=]( const boxed& ys_) -> boxed {
	const array_t& xs = unbox<array_t>(xs_);
	const array_t& ys = unbox<array_t>(ys_);
	int i = 0;
	const int xlen = xs.size();
	const int ylen = ys.size();
	while ( i < xlen && i < ylen) {
	  const int o = unbox<int>( f(xs[i])(ys[i]));
	  if (o != 0) {
	    return o;
	  }
	  i++;
	}
	if (xlen == ylen) {
	  return 0;
	}  else if (xlen > ylen) {
	  return -1;
	} else {
	  return 1;
	}	
      };
    };
  };
  return _;
};

