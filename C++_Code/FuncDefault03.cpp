#include <iostream>

int Rectangle(int a, int b = 5) {
	return a * b;
}

int main(void) {
	int a;
	std::cout << "사각형의 너비를 입력해주세요";
	std::cin >> a;
	std::cout << "사각형의 넓이는 " << Rectangle(a);
	std::cout << "cm^2 입니다." << std::endl;
	return 0;
}
//0716FuncDefault03.cpp