#include <functional>
#include "purescript.h"

// Tested with package v2.0.0

using namespace purescript;

extern "C" auto PS_Effect_Uncurried_mkEffectFn1() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&)>>(
						   [=](const boxed& a) -> boxed {
						     return fn(a)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn2() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&, const boxed&)>>(
								 [=](const boxed& a, const boxed& b) -> boxed {
								   return fn(a)(b)();
								 }
								 );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn3() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c) -> boxed {
						     return fn(a)(b)(c)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn4() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d) -> boxed {
						     return fn(a)(b)(c)(d)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn5() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d,
						       const boxed& e) -> boxed {
						     return fn(a)(b)(c)(d)(e)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn6() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d,
						       const boxed& e,
						       const boxed& f) -> boxed {
						     return fn(a)(b)(c)(d)(e)(f)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn7() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d,
						       const boxed& e,
						       const boxed& f,
						       const boxed& g) -> boxed {
						     return fn(a)(b)(c)(d)(e)(f)(g)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn8() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d,
						       const boxed& e,
						       const boxed& f,
						       const boxed& g,
						       const boxed& h) -> boxed {
						     return fn(a)(b)(c)(d)(e)(f)(g)(h)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn9() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d,
						       const boxed& e,
						       const boxed& f,
						       const boxed& g,
						       const boxed& h,
						       const boxed& i) -> boxed {
						     return fn(a)(b)(c)(d)(e)(f)(g)(h)(i)();
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_mkEffectFn10() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d,
						       const boxed& e,
						       const boxed& f,
						       const boxed& g,
						       const boxed& h,
						       const boxed& i,
						       const boxed& j) -> boxed {
						     return fn(a)(b)(c)(d)(e)(f)(g)(h)(i)(j)();
						   }
						   );
  };
  return _;
};

// runEffectFn

extern "C" auto PS_Effect_Uncurried_runEffectFn1() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=]() -> boxed {
	return unbox<std::function<boxed(const boxed&)>>(fn)(a);
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn2() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=]() -> boxed {
	  return unbox<std::function<boxed(const boxed&, const boxed&)>>(fn)(a, b);
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn3() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=]() -> boxed {
	    return unbox<std::function<boxed(const boxed&,
					     const boxed&,
					     const boxed&)>>(fn)(a, b, c);
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn4() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=]() -> boxed {
	      return unbox<std::function<boxed(const boxed&,
					       const boxed&,
					       const boxed&,
					       const boxed&)>>(fn)(a, b, c, d);
	    };
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn5() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=]() -> boxed {
		return unbox<std::function<boxed(const boxed&,
						 const boxed&,
						 const boxed&,
						 const boxed&,
						 const boxed&)>>(fn)(a, b, c, d, e);
	      };
	    };
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn6() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=]() -> boxed {
		  return fn(a)(b)(c)(d)(e)(f);
		  return unbox<std::function<boxed(const boxed&,
						   const boxed&,
						   const boxed&,
						   const boxed&,
						   const boxed&,
						   const boxed&)>>(fn)(a, b, c, d, e, f);
		};
	      };
	    };
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn7() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=](const boxed& g) -> boxed {
		  return [=]() -> boxed {
		    return unbox<std::function<boxed(const boxed&,
						     const boxed&,
						     const boxed&,
						     const boxed&,
						     const boxed&,
						     const boxed&,
						     const boxed&)>>(fn)(a, b, c, d, e, f, g);
		  };
		};
	      };
	    };
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn8() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=](const boxed& g) -> boxed {
		  return [=](const boxed& h) -> boxed {
		    return [=]() -> boxed {
		      return unbox<std::function<boxed(const boxed&,
						       const boxed&,
						       const boxed&,
						       const boxed&,
						       const boxed&,
						       const boxed&,
						       const boxed&,
						       const boxed&)>>(fn)(a, b, c, d, e, f, g, h);
		    };
		  };
		};
	      };
	    };
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn9() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=](const boxed& g) -> boxed {
		  return [=](const boxed& h) -> boxed {
		    return [=](const boxed& i) -> boxed {
		      return [=]() -> boxed {
			return unbox<std::function<boxed(const boxed&,
							 const boxed&,
							 const boxed&,
							 const boxed&,
							 const boxed&,
							 const boxed&,
							 const boxed&,
							 const boxed&,
							 const boxed&)>>(fn)(a, b, c, d, e, f, g, h, i);
		      };
		    };
		  };
		};
	      };
	    };
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Effect_Uncurried_runEffectFn10() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=](const boxed& g) -> boxed {
		  return [=](const boxed& h) -> boxed {
		    return [=](const boxed& i) -> boxed {
		      return [=](const boxed& j) -> boxed {
			return [=]() -> boxed {
			  return unbox<std::function<boxed(const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&,
							   const boxed&)>>(fn)(a, b, c, d, e, f, g, h, i, j);
			};
		      };
		    };
		  };
		};
	      };
	    };
	  };
	};
      };
    };
  };
  return _;
};


