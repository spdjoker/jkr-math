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

#include "jkr/declaration/type_vec1.hpp"
#include "jkr/declaration/type_vec3.hpp"

// TODO: move to dedicated files later for specific inclusion later

namespace jkr {

	using vec1f = vec<1, float>;
	using vec1i = vec<1, int>;
	using vec1d = vec<1, double>;
	using vec1b = vec<1, bool>;

	using vec3f = vec<3, float>;
	using vec3i = vec<3, int>;
	using vec3d = vec<3, double>;
	using vec3b = vec<3, bool>;


}

#endif