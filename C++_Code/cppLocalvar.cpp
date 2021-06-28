#include <iostream>

int main(void) {
	int num = 5;
	for (int i = 0; i < 3; i++) {
		std::cout << "현재 i의 값 : ";
		std::cout << i << std::endl;
		std::cout << num << std::endl;
	}
	std::cout << num << std::endl;
	return 0;
}
//0716cppLocalVar.cpp