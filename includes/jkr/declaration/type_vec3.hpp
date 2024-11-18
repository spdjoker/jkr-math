/// @file jkr/declaration/type_vec3.hpp

#ifndef JKR_TYPE_VEC3_HPP
#define JKR_TYPE_VEC3_HPP

#include "jkr/setup.hpp"
#include "jkr/macro.hpp"

namespace jkr {

	/**
	 * @class vec<3,T>
	 * @brief A specialization of @ref vec with a length of 3.
	 * 
	 * @tparam T The value type of the elements within this vector.
	 */

	template <typename T>
	struct vec<3, T> {

		using type = vec<3, T>;
		using value_type = T;

		DOXYGEN_UNION
			DOXYGEN_STRUCT
				VECTOR_COMPONENT_X_BRIEF T x;
				VECTOR_COMPONENT_Y_BRIEF T y;
				VECTOR_COMPONENT_Z_BRIEF T z;
			DOXYGEN_END
			DOXYGEN_STRUCT
				VECTOR_COMPONENT_R_BRIEF T r;
				VECTOR_COMPONENT_G_BRIEF T g;
				VECTOR_COMPONENT_B_BRIEF T b;
			DOXYGEN_END
		DOXYGEN_END

		
		constexpr vec();
		vec(vec<3, T> const& v);

		// -- Explicit Basic Constructors --
		explicit vec(T scalar);
		constexpr vec(T a, T b, T z);

		// -- Scalar Constructors
		template <typename T0, typename T1, typename T2>
		vec(T0 a, T1 b, T2 c);

		// -- Vector Conversion Constructors --
		template <typename U>
		explicit vec(vec<3, U> const& v);


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

		// -- Unary Arithmetic Operators --
		template <typename T>
		friend constexpr vec<3, T> operator - (vec<3, T> const& v);

		// -- Binary Arithmetic Operators --
		template <typename T, typename U>
		friend constexpr vec<3, T> operator + (vec<3, T> const& v, U scalar);
		template <typename T, typename U>
		friend constexpr vec<3, T> operator + (U scalar, vec<3, T> const& v);
		template <typename T>
		friend constexpr vec<3, T> operator + (vec<3, T> const& v1, vec<3, T> const& v2);
		template <typename T, typename U>
		friend constexpr vec<3, T> operator - (vec<3, T> const& v, U scalar);
		template <typename T, typename U>
		friend constexpr vec<3, T> operator - (U scalar, vec<3, T> const& v);
		template <typename T>
		friend constexpr vec<3, T> operator - (vec<3, T> const& v1, vec<3, T> const& v2);
		template <typename T, typename U>
		friend constexpr vec<3, T> operator * (vec<3, T> const& v, U scalar);
		template <typename T, typename U>
		friend constexpr vec<3, T> operator * (U scalar, vec<3, T> const& v);

		// -- Boolean Operators --
		template <typename T>
		friend constexpr bool operator == (vec<3, T> const& v1, vec<3, T> const& v2);
		template <typename T>
		friend constexpr bool operator != (vec<3, T> const& v1, vec<3, T> const& v2);

		friend constexpr vec<3, bool> operator && (vec<3, bool> const& v1, vec<3, bool> const& v2);
		friend constexpr vec<3, bool> operator || (vec<3, bool> const& v1, vec<3, bool> const& v2);
	};

}

#include "jkr/declaration/type_vec3.inl"

#endif