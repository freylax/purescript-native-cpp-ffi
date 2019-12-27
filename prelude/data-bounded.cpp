#include <limits>
#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Bounded_topInt() -> const boxed& {
  static const boxed _ = std::numeric_limits<int>::max();
  return _;
};
extern "C" auto PS_Data_Bounded_bottomInt() -> const boxed& {
  static const boxed _ = std::numeric_limits<int>::min();
  return _;
};

extern "C" auto PS_Data_Bounded_topChar() -> const boxed& {
  static const boxed _ = u8"\U0010FFFF"; // unicode limit
  return _;
};
extern "C" auto PS_Data_Bounded_bottomChar() -> const boxed& {
  static const boxed _ = u8"\0";
  return _;
};

extern "C" auto PS_Data_Bounded_topNumber() -> const boxed& {
  static const boxed _ = std::numeric_limits<double>::max();
  return _;
};
extern "C" auto PS_Data_Bounded_bottomNumber() -> const boxed& {
  static const boxed _ = std::numeric_limits<double>::min();
  return _;
};


