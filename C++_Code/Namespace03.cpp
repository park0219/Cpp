#include <iostream>

namespace student1 {
	void Function(void);
}
namespace student2 {
	void Function(void);
}
namespace student1 {
	void Function2(void);
}
int main(void) {
	student1::Function();
	return 0;
}

void student1::Function(void) {
	std::cout << "student1�� Function() ȣ��" << std::endl;
	Function2();
	student2::Function();
}
void student2::Function(void) {
	std::cout << "student2�� Function() ȣ��" << std::endl;
}
void student1::Function2(void) {
	std::cout << "student1�� Function2() ȣ��" << std::endl;
}
//0717Namespace03.cpp