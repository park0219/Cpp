#include <iostream>
using namespace std;

int main(void) {
	int num1 = 234;
	//num1 ������ num2, num3, num4 ������ ���Ӱ� �ο���
	int &num2 = num1;
	int &num3 = num2;
	int &num4 = num3;

	num2 += 500;
	num3 += 100;
	num4 += 10;
	cout << "���������� : " << num1 << endl;
	cout << "�����ں����� : " << num2 << endl;
	return 0;
}
//0718RefVar.cpp