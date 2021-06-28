/*
함수 오버로딩을 통해서 동일한 함수를
3개 작성해보세요.
함수 이름과 파라미터의 종류는 직접 정해주시면 됩니다.
*/
#include <iostream>

void Overloading(void) {
	std::cout << "파라미터값이 없습니다" << std::endl;
}

void Overloading(int a) {
	std::cout << "파라미터값은 int 1개입니다." << std::endl;
}

void Overloading(int n1, int n2) {
	std::cout << "파라미터값은 int 2개입니다." << std::endl;
}

int main(void) {
	Overloading();
	Overloading(1);
	Overloading(2, 3);
	return 0;
}