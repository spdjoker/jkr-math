/**
 * @file common.hpp
 * @author Jose Gonzalez Lopez (joseg072103@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef JKR_COMMON_HPP
#define JKR_COMMON_HPP

#include "jkr/declaration/type_vec3.hpp"

// TODO: move to dedicated files later for specific inclusion later

namespace jkr {

	/// @brief test
	using  vec3 = vec<3, float>;
	using ivec3 = vec<3, int>;
	using dvec3 = vec<3, double>;
	using bvec3 = vec<3, bool>;

}

#endif