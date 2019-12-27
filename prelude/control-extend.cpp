#include "purescript.h"

// Tested with package

using namespace purescript;

extern "C" auto PS_Control_Extend_arrayExtend() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=](const boxed& xs_) -> boxed {
      const auto& xs = unbox<array_t>( xs_);
      const auto xsize = xs.size();
      array_t zs( xsize);
      for( int i = 0; i<xsize; ++i) {
	array_t ys(xsize-i);
	for( int j = 0; j<ys.size(); ++j) ys[j]=xs[i+j];
	zs[i]=f(ys);
      }
      return zs;
    };
  };
  return _;
}

