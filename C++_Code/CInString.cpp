#include <iostream>

int main(void) {
	char name[50];
	char hobby[50];
	int age;

	std::cout << "당신의 이름은? ";
	std::cin >> name;
	std::cout << "당신의 취미는? ";
	std::cin >> hobby;
	std::cout << "당신의 나이는? ";
	std::cin >> age;
	std::cout << name << ", " << hobby << ", " << age << std::endl;
	return 0;
}
//0715CInString.cpp