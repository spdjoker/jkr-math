#ifndef JKR_COMMON_HPP
#define JKR_COMMON_HPP

#include "jkr/type_vec3.hpp"

// TODO: move to dedicated files later for specific inclusion later

namespace jkr {

	using bvec3 = vec<3, bool>;
	using  vec3 = vec<3, float>;
	using ivec3 = vec<3, int>;
	using dvec3 = vec<3, double>;

}

#endif