/*
C++���� ����ϴ� �Է� ��Ģ�� ����ؼ�
���� �µ��� �Է��ϸ� ȭ�� �µ���
�ٲ��ִ� ���α׷��� ��������.
ȭ��->���� ��ȯ ������
�����µ� = (ȭ���µ� - 32) / 1.8
*/
#include <iostream>
int main(void) {
	double temp;
	std::cout << "���� �µ��� �����ּ���";
	std::cin >> temp;

	double comp = temp * 1.8 + 32;
	std::cout << "ȭ�� �µ��� : " << comp << " �� �Դϴ�." << std::endl;
	return 0;
}

