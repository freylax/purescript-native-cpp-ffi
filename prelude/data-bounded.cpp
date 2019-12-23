#include <limits>
#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Bounded_topInt() -> boxed {
  static const boxed _ = std::numeric_limits<int>::max();
  return _;
};
extern "C" auto PS_Data_Bounded_bottomInt() -> boxed {
  static const boxed _ = std::numeric_limits<int>::min();
  return _;
};

extern "C" auto PS_Data_Bounded_topChar() -> boxed {
  static const boxed _ = u8"\U0010FFFF"; // unicode limit
  return _;
};
extern "C" auto PS_Data_Bounded_bottomChar() -> boxed {
  static const boxed _ = u8"\0";
  return _;
};

extern "C" auto PS_Data_Bounded_topNumber() -> boxed {
  static const boxed _ = std::numeric_limits<double>::max();
  return _;
};
extern "C" auto PS_Data_Bounded_bottomNumber() -> boxed {
  static const boxed _ = std::numeric_limits<double>::min();
  return _;
};


