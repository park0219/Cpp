#include <iostream>

int Func(int a = 5) {
	return a + 5;
}

int main(void) {
	std::cout << Func() << std::endl;
	std::cout << Func(10) << std::endl;
	return 0;
}
//0716FuncDefault01.cpp