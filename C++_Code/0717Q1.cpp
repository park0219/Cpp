/*
�̸����� ������ �̿��ؼ� ���� �̸��� ���� 2�� �̻�,
���� �̸��� �Լ� 2�� �̻��� �� ���� ���ο� �����ϵ���
������ּ���.
�� �Լ��� �����ε��� ������� �ʽ��ϴ�.
*/
#include <iostream>
using namespace std;

namespace AAA {
	int num = 5;
	void ShowNum(int a) {
		cout << a << endl;
		cout << "AAA�� �Լ��Դϴ�." << endl;
	}
}

namespace BBB {
	int num = 10;
	void ShowNum(int a) {
		cout << a << endl;
		cout << "BBB�� �Լ��Դϴ�." << endl;
	}
}

int main(void) {
	AAA::ShowNum(AAA::num);
	BBB::ShowNum(BBB::num);
	return 0;
}