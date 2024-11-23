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
  constexpr vec<1, T>::vec(T scalar)
    : x(scalar)
  {}

  template <typename T>
  template <typename U>
  vec<1, T>::vec(vec<1, U> const& v)
    : x(static_cast<T>(v.x))
  {}

  // Assignment Operators

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator  = (vec<1, U> const& v) {
    this->x = static_cast<T>(v.x);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator  = (U scalar) {
    this->x  = static_cast<T>(scalar);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator += (vec<1, U> const& v) {
    this->x += static_cast<T>(v.x);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator += (U scalar) {
    this->x += static_cast<T>(scalar);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator -= (vec<1, U> const& v) {
    this->x -= static_cast<T>(v.x);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator -= (U scalar) {
    this->x -= static_cast<T>(scalar);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator *= (vec<1, U> const& v) {
    this->x *= static_cast<T>(v.x);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator *= (U scalar) {
    this->x *= static_cast<T>(scalar);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator /= (vec<1, U> const& v) {
    this->x /= static_cast<T>(v.x);
    return *this;
  }

  template <typename T>
  template <typename U> 
  constexpr vec<1, T>& vec<1,T>::operator /= (U scalar) {
    this->x /= static_cast<T>(scalar);
    return *this;
  }

  // Arithmetic Operators
  template <typename T>
  constexpr vec<1, T> operator + (vec<1, T> const& lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) += rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator + (vec<1, T> const& lhs, U rhs) {
    return  vec<1, T>(lhs) += rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator + (U lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) += rhs;
  }

  template <typename T>
  constexpr vec<1, T> operator - (vec<1, T> const& lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) -= rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator - (vec<1, T> const& lhs, U rhs) {
    return  vec<1, T>(lhs) -= rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator - (U lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) -= rhs;
  }

  template <typename T>
  constexpr vec<1, T> operator * (vec<1, T> const& lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) *= rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator * (vec<1, T> const& lhs, U rhs) {
    return  vec<1, T>(lhs) *= rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator * (U lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) *= rhs;
  }

  template <typename T>
  constexpr vec<1, T> operator / (vec<1, T> const& lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) /= rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator / (vec<1, T> const& lhs, U rhs) {
    return  vec<1, T>(lhs) /= rhs;
  }

  template <typename T, typename U>
  constexpr vec<1, T> operator / (U lhs, vec<1, T> const& rhs) {
    return  vec<1, T>(lhs) /= rhs;
  }

  // Conditional Operators
  template <typename T>
  constexpr bool operator == (vec<1, T> const& lhs, vec<1, T> const& rhs) {
    return lhs.x == rhs.x;
  }

  template <typename T>
  constexpr bool operator != (vec<1, T> const& lhs, vec<1, T> const& rhs) {
    return lhs.x != rhs.x;
  }

}

#endif // JKR_DECLARATION_TYPE_VEC3_INL