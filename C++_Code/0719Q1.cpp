/*
���� 1.
������ ������ �̿��ؼ� int�� �ڷ��� num��
��Ī�� 2�� �ٿ�������.

���� ��Ī�� �̿��� ���� �����غ��� ȭ�鿡 ��µ�
�� ������.
*/
#include <iostream>
using namespace std;

int main(void) {
	int num1 = 5;
	int &num2 = num1;
	int &num3 = num2;
	num3 += 100;
	cout << num2 << endl;
	cout << num1 << endl;
	system("pause");
	return 0;
}