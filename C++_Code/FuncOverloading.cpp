#include <iostream>

void Func(void) {
	std::cout << "void �Ķ���� �Լ� ȣ��" << std::endl;
}
void Func(double a) {
	std::cout << "double �Ķ���� �Լ� ȣ��" << std::endl;
}
void Func(int a) {
	std::cout << "int �Ķ���� �Լ� ȣ��" << std::endl;
}
void Func(char a, char b) {
	std::cout << "char, char �Ķ���� �Լ� ȣ��" << std::endl;
}
int main(void) {
	Func();
	Func(1.2);
	Func(3);
	Func('a', 'c');
	return 0;
}
//0716FuncOverloading.cpp