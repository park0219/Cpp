/*
�Լ� �����ε��� ���ؼ� ������ �Լ���
3�� �ۼ��غ�����.
�Լ� �̸��� �Ķ������ ������ ���� �����ֽø� �˴ϴ�.
*/
#include <iostream>

void Overloading(void) {
	std::cout << "�Ķ���Ͱ��� �����ϴ�" << std::endl;
}

void Overloading(int a) {
	std::cout << "�Ķ���Ͱ��� int 1���Դϴ�." << std::endl;
}

void Overloading(int n1, int n2) {
	std::cout << "�Ķ���Ͱ��� int 2���Դϴ�." << std::endl;
}

int main(void) {
	Overloading();
	Overloading(1);
	Overloading(2, 3);
	return 0;
}