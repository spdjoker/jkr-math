#ifndef JKR_TYPE_VEC3_HPP
#define JKR_TYPE_VEC3_HPP

#include "./setup.hpp"

namespace jkr {

	// TODO: Add documentation
	template <typename T>
	struct vec<3, T> {

		// TODO: Add documentation
		typedef vec<3, T> type;
		// TODO: Add documentation
		typedef T value_type;

		// TODO: Add documentation
		union {
			struct alignas(T) { T x, y, z; };
			struct alignas(T) { T r, g, b; };
			T value[3];
		};
		
		// TODO: Add documentation
		constexpr vec();
		// TODO: Add documentation
		vec(vec<3, T> const& v);

		// -- Explicit Basic Constructors --
		// TODO: Add documentation
		explicit vec(T scalar);
		// TODO: Add documentation
		constexpr vec(T a, T b, T z);

		// -- Scalar Constructors
		// TODO: Add documentation
		template <typename T0, typename T1, typename T2>
		vec(T0 a, T1 b, T2 c);

		// -- Vector Conversion Constructors --
		// TODO: Add documentation
		template <typename U>
		explicit vec(vec<3, U> const& v);


#ifdef ENABLE_SWIZZLE
#include "./swizzle.hpp"
		JKR_VEC3_SWIZZLE_VEC2(x,y,z)
		JKR_VEC3_SWIZZLE_VEC3(x,y,z)
#endif

		// Unary Arithmetic Operators
		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator  = (const vec<3, U>& v);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator += (U scalar);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator += (const vec<3, U>& v);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator -= (U scalar);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator -= (const vec<3, U>& v);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator *= (U scalar);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator *= (const vec<3, U>& v);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator /= (U scalar);

		// TODO: Add documentation
		template <typename U>
		vec<3, T>& operator /= (const vec<3, U>& v);
	};

	// -- Unary Arithmetic Operators --
	// TODO: Add documentation
	template <typename T>
	constexpr vec<3, T> operator - (vec<3, T> const& v);

	// -- Binary Arithmetic Operators -------
	// TODO: Add documentation
	template <typename T, typename U>
	constexpr vec<3, T> operator + (vec<3, T> const& v, U scalar);

	// TODO: Add documentation
	template <typename T, typename U>
	constexpr vec<3, T> operator + (U scalar, vec<3, T> const& v);

	// TODO: Add documentation
	template <typename T>
	constexpr vec<3, T> operator + (vec<3, T> const& v1, vec<3, T> const& v2);

	// TODO: Add documentation
	template <typename T, typename U>
	constexpr vec<3, T> operator - (vec<3, T> const& v, U scalar);

	// TODO: Add documentation
	template <typename T, typename U>
	constexpr vec<3, T> operator - (U scalar, vec<3, T> const& v);

	// TODO: Add documentation
	template <typename T>
	constexpr vec<3, T> operator - (vec<3, T> const& v1, vec<3, T> const& v2);

	// TODO: Add documentation
	template <typename T, typename U>
	constexpr vec<3, T> operator * (vec<3, T> const& v, U scalar);

	// TODO: Add documentation
	template <typename T, typename U>
	constexpr vec<3, T> operator * (U scalar, vec<3, T> const& v);

	// -- Boolean Operators --
	// TODO: Add documentation
	template <typename T>
	constexpr bool operator == (vec<3, T> const& v1, vec<3, T> const& v2);

	// TODO: Add documentation
	template <typename T>
	constexpr bool operator != (vec<3, T> const& v1, vec<3, T> const& v2);

	// TODO: Add documentation
	constexpr vec<3, bool> operator && (vec<3, bool> const& v1, vec<3, bool> const& v2);

	// TODO: Add documentation
	constexpr vec<3, bool> operator || (vec<3, bool> const& v1, vec<3, bool> const& v2);

}

#include "./type_vec3.inl"

#endif