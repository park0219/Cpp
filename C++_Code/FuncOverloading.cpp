#include <iostream>

void Func(void) {
	std::cout << "void 파라미터 함수 호출" << std::endl;
}
void Func(double a) {
	std::cout << "double 파라미터 함수 호출" << std::endl;
}
void Func(int a) {
	std::cout << "int 파라미터 함수 호출" << std::endl;
}
void Func(char a, char b) {
	std::cout << "char, char 파라미터 함수 호출" << std::endl;
}
int main(void) {
	Func();
	Func(1.2);
	Func(3);
	Func('a', 'c');
	return 0;
}
//0716FuncOverloading.cpp