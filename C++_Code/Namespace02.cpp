#include <iostream>
//0717Namespace02.cpp
namespace student1 {
	void Function(void);
}
namespace student2 {
	void Function(void);
}

int main(void) {
	student1::Function();
	student2::Function();
	return 0;
}
void student1::Function(void) {
	std::cout << "�л� 1�� �Լ�" << std::endl;
}
void student2::Function(void) {
	std::cout << "�л� 2�� �Լ�" << std::endl;
}