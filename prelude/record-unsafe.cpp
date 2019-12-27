#include "purescript.h"
using namespace purescript;

extern "C" auto PS_Record_Unsafe_unsafeHas() -> const boxed& {
  static const boxed _ = [](const boxed& label_) -> boxed {
    return [=]( const boxed& rec_) -> boxed {
      const auto& label = unbox<string>( label_);
      const auto& rec = unbox<dict_t>( rec_);
      return rec.contains( label.c_str());
    };
  };
  return _;
};

extern "C" auto PS_Record_Unsafe_unsafeGet() -> const boxed& {
  static const boxed _ = [](const boxed& label_) -> boxed {
    return [=]( const boxed& rec_) -> boxed {
      const auto& label = unbox<string>( label_);
      const auto& rec = unbox<dict_t>( rec_);
      return rec[ label.c_str()];
    };
  };
  return _;
};

extern "C" auto PS_Record_Unsafe_unsafeSet() -> const boxed& {
  static const boxed _ = [](const boxed& label_) -> boxed {
    return [=]( const boxed& value) -> boxed {
      return [=]( const boxed& rec_) -> boxed {
	const auto& label = unbox<string>( label_);
	auto rec = unbox<dict_t>( rec_);
	rec[ label.c_str()] = value;
	return rec;
      };
    };
  };
  return _;
};

extern "C" auto PS_Record_Unsafe_unsafeDelete() -> const boxed& {
  static const boxed _ = [](const boxed& label_) -> boxed {
    return [=]( const boxed& rec_) -> boxed {
      const char* label = unbox<string>( label_).c_str();
      const auto& rec = unbox<dict_t>( rec_);
      dict_t ret;
      for (auto it = rec.cbegin(), end=rec.cend(); it != end; it++) {
	const auto& elem_key = it->first;
	if( !!(elem_key == label || !std::strcmp(elem_key, label))) {
	  ret[elem_key]=it->second;
	};
	return ret;
      };
    };
  };
  return _;
};

