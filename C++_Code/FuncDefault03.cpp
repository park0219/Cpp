#include <iostream>

int Rectangle(int a, int b = 5) {
	return a * b;
}

int main(void) {
	int a;
	std::cout << "�簢���� �ʺ� �Է����ּ���";
	std::cin >> a;
	std::cout << "�簢���� ���̴� " << Rectangle(a);
	std::cout << "cm^2 �Դϴ�." << std::endl;
	return 0;
}
//0716FuncDefault03.cpp