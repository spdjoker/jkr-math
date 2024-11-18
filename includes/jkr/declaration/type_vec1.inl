/// @file jkr/declaration/type_vec1.inl
/// @ref jkr/declaration/type_vec1.hpp

#ifndef JKR_DECLARATION_TYPE_VEC1_INL
#define JKR_DECLARATION_TYPE_VEC1_INL

namespace jkr {

  template <typename T>
  constexpr vec<1, T>::vec()
    : x(T())
  {}

  template <typename T>
  vec<1, T>::vec(vec<1, T> const& v)
    : x(v.x)
  {}

  template <typename T>
  vec<1, T>::vec(T scalar)
    : x(scalar)
  {}

  template <typename T>
  template <typename U>
  vec<1, T>::vec(vec<1, U> const& v)
    : x(static_cast<T>(v.x))
  {}
}

#endif // JKR_DECLARATION_TYPE_VEC3_INL