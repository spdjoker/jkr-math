#pragma once

#include "./setup.hpp"

//#ifdef ENABLE_SWIZZLE
//#include "./swizzle.hpp"
//#endif

namespace jkr {

	template <typename T>
	struct vec<3, T> {

		typedef vec<3, T> type;
		typedef T value_type;

		union {
			struct alignas(T) { T x, y, z; };
			struct alignas(T) { T r, g, b; };
			T value[3];
		};
		
		// -- Implicit Basic Constructors --
		constexpr vec();
		vec(vec<3, T> const& v);

		// -- Explicit Basic Constructors --
		explicit vec(T scalar);
		vec(T a, T b, T z);


		// -- Scalar Constructors
		template <typename T0, typename T1, typename T2>
		vec(T0 a, T1 b, T2 c);

		// -- Vector Conversion Constructors --
		template <typename U>
		vec(vec<3, U> const& v);


#ifdef ENABLE_SWIZZLE
#include "./swizzle.hpp"
		JKR_VEC3_SWIZZLE_VEC2(x,y,z)
		JKR_VEC3_SWIZZLE_VEC3(x,y,z)
#endif

		// Unary Arithmetic Operators
		template <typename U>
		vec<3, T>& operator  = (const vec<3, U>& v);

		template <typename U>
		vec<3, T>& operator += (U scalar);

		template <typename U>
		vec<3, T>& operator += (const vec<3, U>& v);

		template <typename U>
		vec<3, T>& operator -= (U scalar);

		template <typename U>
		vec<3, T>& operator -= (const vec<3, U>& v);

		template <typename U>
		vec<3, T>& operator *= (U scalar);

		template <typename U>
		vec<3, T>& operator *= (const vec<3, U>& v);

		template <typename U>
		vec<3, T>& operator /= (U scalar);

		template <typename U>
		vec<3, T>& operator /= (const vec<3, U>& v);
	};

	// -- Unary Arithmetic Operators --
	template <typename T>
	constexpr vec<3, T> operator - (vec<3, T> const& v);

	// -- Binary Arithmetic Operators -------
	template <typename T, typename U>
	constexpr vec<3, T> operator + (vec<3, T> const& v, U scalar);

	template <typename T, typename U>
	constexpr vec<3, T> operator + (U scalar, vec<3, T> const& v);

	template <typename T>
	constexpr vec<3, T> operator + (vec<3, T> const& v1, vec<3, T> const& v2);

	template <typename T, typename U>
	constexpr vec<3, T> operator - (vec<3, T> const& v, U scalar);

	template <typename T, typename U>
	constexpr vec<3, T> operator - (U scalar, vec<3, T> const& v);

	template <typename T>
	constexpr vec<3, T> operator - (vec<3, T> const& v1, vec<3, T> const& v2);

	template <typename T, typename U>
	constexpr vec<3, T> operator * (vec<3, T> const& v, U scalar);

	template <typename T, typename U>
	constexpr vec<3, T> operator * (U scalar, vec<3, T> const& v);

	// -- Boolean Operators --
	template <typename T>
	constexpr bool operator == (vec<3, T> const& v1, vec<3, T> const& v2);

	template <typename T>
	constexpr bool operator != (vec<3, T> const& v1, vec<3, T> const& v2);

	template <typename T>
	constexpr vec<3, bool> operator && (vec<3, bool> const& v1, vec<3, bool> const& v2);

	template <typename T>
	constexpr vec<3, bool> operator || (vec<3, bool> const& v1, vec<3, bool> const& v2);

}

#include "./type_vec3_inline.hpp"
