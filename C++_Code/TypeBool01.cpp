#include <iostream>
using namespace std;

int main(void) {
	int a = 100;

	cout << "��(true) : " << true << endl;
	cout << "����(false) : " << false << endl;

	if (true) {
		cout << "�� �ڷ�� ���ǽ��� ������� ����մϴ�." << endl;
	}

	cout << "���� 1�� ũ�� : " << sizeof(1) << endl;
	cout << "���� 0�� ũ�� : " << sizeof(0) << endl;
	cout << "true�� ũ�� : " << sizeof(true) << endl;
	cout << "false�� ũ�� : " << sizeof(false) << endl;
	return 0;
}
//0718TypeBool01.cpp