#include "purescript.h"
using namespace purescript;

extern "C" auto PS_Control_Bind_arrayBind() -> const boxed& {
  static const boxed _ = [](const boxed& xs_) -> boxed {
    return [=]( const boxed& f) -> boxed {
      const auto& xs = unbox<array_t>(xs_);
      array_t result;
      for (int i = 0;  i < xs.size(); i++) {
	const array_t& ys = unbox<array_t>( f( xs[i]));
	for(int j = 0; j < ys.size(); j++) {
	  result.push_back( ys[j]);
	}
      }
      return result;
    };
  };
  return _;
};
