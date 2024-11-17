#ifndef JKR_TYPE_VEC3_INL
#define JKR_TYPE_VEC3_INL

namespace jkr {

	// Implicit Basic Constructors
	template <typename T>
	constexpr vec<3, T>::vec()
		: x(T())
		, y(T())
		, z(T())
	{}

	template <typename T>
	vec<3, T>::vec(vec<3, T> const& v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
	{}

	// Explicit Basic Constructors
	template <typename T>
	vec<3, T>::vec(T scalar)
		: x(scalar)
		, y(scalar)
		, z(scalar) 
	{}

	template <typename T>
	constexpr vec<3, T>::vec(T a, T b, T c)
		: x(a)
		, y(b)
		, z(c) 
	{}

	// Scalar Constructors
	template <typename T>
	template <typename T0, typename T1, typename T2>
	vec<3, T>::vec(T0 a, T1 b, T2 c)
		: x(static_cast<T>(a))
		, y(static_cast<T>(b))
		, z(static_cast<T>(c)) 
	{}

	// Vector Conversion Constructors
	template <typename T>
	template <typename U>
	vec<3, T>::vec(vec<3, U> const& v)
		: x(static_cast<T>(v.x))
		, y(static_cast<T>(v.y))
		, z(static_cast<T>(v.z))
	{}

	// Unary Arithmetic Operators
	template <typename T>
	template<typename U>
	vec<3, T>& vec<3, T>::operator = (vec<3, U> const& v) {
		if (this == &v) return *this;
		this->x = static_cast<T>(v.x);
		this->y = static_cast<T>(v.y);
		this->z = static_cast<T>(v.z);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& jkr::vec<3, T>::operator += (U scalar) {
		this->x += static_cast<T>(scalar);
		this->y += static_cast<T>(scalar);
		this->z += static_cast<T>(scalar);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& vec<3, T>::operator += (const vec<3, U>& v) {
		this->x += static_cast<T>(v.x);
		this->y += static_cast<T>(v.y);
		this->z += static_cast<T>(v.z);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& jkr::vec<3, T>::operator -= (U scalar) {
		this->x -= static_cast<T>(scalar);
		this->y -= static_cast<T>(scalar);
		this->z -= static_cast<T>(scalar);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& vec<3, T>::operator -= (const vec<3, U>& v) {
		this->x -= static_cast<T>(v.x);
		this->y -= static_cast<T>(v.y);
		this->z -= static_cast<T>(v.z);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& jkr::vec<3, T>::operator *= (U scalar) {
		this->x *= static_cast<T>(scalar);
		this->y *= static_cast<T>(scalar);
		this->z *= static_cast<T>(scalar);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& vec<3, T>::operator *= (const vec<3, U>& v) {
		this->x *= static_cast<T>(v.x);
		this->y *= static_cast<T>(v.y);
		this->z *= static_cast<T>(v.z);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& jkr::vec<3, T>::operator /= (U scalar) {
		this->x /= static_cast<T>(scalar);
		this->y /= static_cast<T>(scalar);
		this->z /= static_cast<T>(scalar);
		return *this;
	}

	template <typename T>
	template <typename U>
	vec<3, T>& vec<3, T>::operator /= (const vec<3, U>& v) {
		this->x /= static_cast<T>(v.x);
		this->y /= static_cast<T>(v.y);
		this->z /= static_cast<T>(v.z);
		return *this;
	}

	// Unary Arithmetic Operators
	template <typename T>
	constexpr vec<3, T> operator - (vec<3, T> const& v) {
		return vec<3, T>(0) -= v;
	}

	// Binary Arithmetic Operators
	template<typename T, typename U>
	constexpr vec<3, T> operator + (vec<3, T> const& v, U scalar) {
		return vec<3, T>(v) += scalar;
	}

	template<typename T, typename U>
	constexpr vec<3, T> operator + (U scalar, vec<3, T> const& v) {
		return vec<3, T>(v) += scalar;
	}

	template<typename T>
	constexpr vec<3, T> operator + (vec<3, T> const& v1, vec<3, T> const& v2) {
		return vec<3, T>(v1) += v2;
	}

	template<typename T, typename U>
	constexpr vec<3, T> operator - (vec<3, T> const& v, U scalar) {
		return vec<3, T>(v) -= scalar;
	}

	template<typename T, typename U>
	constexpr vec<3, T> operator - (U scalar, vec<3, T> const& v) {
		return vec<3, T>(scalar) -= v;
	}

	template<typename T>
	constexpr vec<3, T> operator - (vec<3, T> const& v1, vec<3, T> const& v2) {
		return vec<3, T>(v1) -= v2;
	}

	template<typename T, typename U>
	constexpr vec<3, T> operator * (vec<3, T> const& v, U scalar) {
		return vec<3, T>(v) *= scalar;
	}

	template<typename T, typename U>
	constexpr vec<3, T> operator * (U scalar, vec<3, T> const& v) {
		return vec<3, T>(v) *= scalar;
	}


	// Conditional Operators
	template <typename T>
	constexpr bool operator == (vec<3, T> const& v1, vec<3, T> const& v2) {
		return v1.x == v2.x && v1.y == v2.y && v1.z == v2.z;
	}

	template <typename T>
	constexpr bool operator != (vec<3, T> const& v1, vec<3, T> const& v2) {
		return v1.x != v2.x || v1.y != v2.y || v1.z != v2.z;
	}

	constexpr vec<3, bool> operator && (vec<3, bool> const& v1, vec<3, bool> const& v2) {
		return vec<3, bool>(v1.x && v2.x, v1.y && v2.y, v1.z && v2.z);
	}

	constexpr vec<3, bool> operator || (vec<3, bool> const& v1, vec<3, bool> const& v2) {
		return vec<3, bool>(v1.x || v2.x, v1.y || v2.y, v1.z || v2.z);
	}

}

#endif