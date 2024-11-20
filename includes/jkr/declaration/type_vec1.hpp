/// @file jkr/declaration/type_vec1.hpp

#ifndef JKR_DECLARATION_TYPE_VEC1_HPP
#define JKR_DECLARATION_TYPE_VEC1_HPP

#include "jkr/setup.hpp"
#include "jkr/macro.hpp"

namespace jkr {
  /**
   * @class vec<1,T>
   * @brief A specialization of @ref vec with a length of 1.
   * 
   * @tparam T The value type of the elements within this vector.
   */

  template <typename T>
  struct vec<1, T>{

		using type = vec<1, T>;
		using value_type = T;

    DOXYGEN_UNION
      VECTOR_COMPONENT_X_BRIEF T x;
      VECTOR_COMPONENT_R_BRIEF T r;
    DOXYGEN_END

    #ifdef ENABLE_SWIZZLE
    #include "swizzle.hpp"
    // TODO: implement xx() and xxxx()
      JKR_SWIZZLE_COMBINATION_VEC3(x,x,x)
    #endif

    // Default Constructor
    constexpr vec();
    // Copy Constructor
    vec(vec<1, T> const& v);
    // Scalar Constructor
    explicit vec(T scalar);
    // Conversion Constructor
    template <typename U> 
    explicit vec(vec<1, U> const& v);
  };

}

#include "jkr/declaration/type_vec1.inl"

#endif // JKR_DECLARATION_TYPE_VEC1_HPP