#include <iostream>
using namespace std;

int num1 = 0;
void Count() {
	//static int num1 = 0; //������ ����(��������, static ���� �����ϴ� ��)�� ����
	int num2 = 0;
	num1 += 1;
	num2 += 1;
	cout << num1 << ' ' << num2 << endl;
}

int main() {

	for (int i = 0; i < 3; i++) {
		Count();
	}

	return 0;
}