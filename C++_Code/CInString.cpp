#include <iostream>

int main(void) {
	char name[50];
	char hobby[50];
	int age;

	std::cout << "����� �̸���? ";
	std::cin >> name;
	std::cout << "����� ��̴�? ";
	std::cin >> hobby;
	std::cout << "����� ���̴�? ";
	std::cin >> age;
	std::cout << name << ", " << hobby << ", " << age << std::endl;
	return 0;
}
//0715CInString.cpp