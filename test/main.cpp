#define ENABLE_SWIZZLE

#include "jkr/common.hpp"

#include <iostream>
#include <string>

using namespace jkr;

template <typename T>
void print(const std::string& prompt, const vec<3, T>& v, int padding = 20) {
	std::cout << '<' << v.x << ',' << v.y << ',' << v.z << ">   <--   " << prompt << '\n';
}

void test_addition() {
	auto key = vec3(9);
	auto res = vec3();

	std::cout << "== VEC3 Addition == == == == == == == == == ==\n";

	res = vec3(3, 3, 3);
	res += 6.0f;
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<3,3,3> += 6", res);

	res = vec3(4, 5, 6);
	res += vec3(5, 4, 3);
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<4,5,6> += <5,4,3>", res);

	res = 2.0f + vec3(7);
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("2 + <7,7,7>", res);

	res = vec3(7) + 2.0f;
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<7,7,7> + 2", res);

	res = vec3(1, 2, 3) + vec3(8, 7, 6);
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<1,2,3> + <8,7,6>", res);
}

void test_subtraction() {
	auto key = vec3();
	auto res = vec3();

	std::cout << "== VEC3 Subtraction == == == == == == == == ==\n";

	res = vec3(3, 3, 3);
	res -= 3.0f;
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<3,3,3> -= 3", res);

	res = vec3(4, 5, 6);
	res -= vec3(4, 5, 6);
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<4,5,6> -= <4,5,6>", res);

	res = 2.0f - vec3(2);
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("2 - <2,2,2>", res);

	res = vec3(7) - 7.0f;
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<7,7,7> - 7", res);

	res = vec3(1, 2, 3) - vec3(1, 2, 3);
	std::cout << ((res == key) ? "[ PASSED ]\t" : "[ FAILED ]\t");
	print("<1,2,3> - <1,2,3>", res);
}

int main(int argc, char* argv[]) {
	test_addition();
	test_subtraction();
	return 0;
}