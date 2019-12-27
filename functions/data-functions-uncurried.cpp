#include <functional>
#include "purescript.h"

// Tested with package v4.0.0

using namespace purescript;

extern "C" auto PS_Data_Function_Uncurried_mkFn0() -> const boxed& {
  static const boxed _ = [](const boxed& f) -> boxed {
    return [=]() -> boxed {
      return f(boxed());
    };
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn2() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&, const boxed&)>>(
								 [=](const boxed& a, const boxed& b) -> boxed {
								   return fn(a)(b);
								 }
								 );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn3() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c) -> boxed {
						     return fn(a)(b)(c);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn4() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return box<std::function<boxed(const boxed&,
                                   const boxed&,
                                   const boxed&,
                                   const boxed&)>>(
						   [=](const boxed& a,
						       const boxed& b,
						       const boxed& c,
						       const boxed& d) -> boxed {
						     return fn(a)(b)(c)(d);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn5() -> const boxed& {
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
						     return fn(a)(b)(c)(d)(e);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn6() -> const boxed& {
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
						     return fn(a)(b)(c)(d)(e)(f);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn7() -> const boxed& {
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
						     return fn(a)(b)(c)(d)(e)(f)(g);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn8() -> const boxed& {
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
						     return fn(a)(b)(c)(d)(e)(f)(g)(h);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn9() -> const boxed& {
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
						     return fn(a)(b)(c)(d)(e)(f)(g)(h)(i);
						   }
						   );
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_mkFn10() -> const boxed& {
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
						     return fn(a)(b)(c)(d)(e)(f)(g)(h)(i)(j);
						   }
						   );
  };
  return _;
};

//--------------------------------- runFn -----------------------------------//

extern "C" auto PS_Data_Function_Uncurried_runFn0() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return fn();
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn2() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return unbox<std::function<boxed(const boxed&, const boxed&)>>(fn)(a, b);
      };
    };
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn3() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return unbox<std::function<boxed(const boxed&,
					   const boxed&,
					   const boxed&)>>(fn)(a, b, c);
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn4() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return unbox<std::function<boxed(const boxed&,
					     const boxed&,
					     const boxed&,
					     const boxed&)>>(fn)(a, b, c, d);
	  };
	};
      };
    };
  };
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn5() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
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
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn6() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
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
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn7() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=](const boxed& g) -> boxed {
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
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn8() -> const boxed& {
  static const boxed _ = [](const boxed& fn) -> boxed {
    return [=](const boxed& a) -> boxed {
      return [=](const boxed& b) -> boxed {
	return [=](const boxed& c) -> boxed {
	  return [=](const boxed& d) -> boxed {
	    return [=](const boxed& e) -> boxed {
	      return [=](const boxed& f) -> boxed {
		return [=](const boxed& g) -> boxed {
		  return [=](const boxed& h) -> boxed {
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
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn9() -> const boxed& {
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
  return _;
};

extern "C" auto PS_Data_Function_Uncurried_runFn10() -> const boxed& {
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
  return _;
};


