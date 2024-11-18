/**
 * @file setup.hpp
 * @author Jose Gonzalez Lopez (joseg072103@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef JKR_SETUP_HPP
#define JKR_SETUP_HPP

// TODO: organize this file

#include <cstddef>

namespace jkr {

	using byte = std::byte;
	using length_t = std::size_t;

	/**
	 * @brief A vector of N elements.
	 * 
	 * @tparam N The length of the vector.
	 * @tparam T The value type of the element(s).
	 */
	template <size_t N, typename T> struct vec;

}

#endif