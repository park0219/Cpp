#include <iostream>

double mul(double a = 1.1, double b = 2.2) {
	return a * b;
}
int main(void) {
	std::cout << mul() << std::endl;
	std::cout << mul(3.14) << std::endl;
	std::cout << mul(5.5, 6.6) << std::endl;
	return 0;
}
//0716FuncDefault02.cpp