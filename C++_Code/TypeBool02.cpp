#include <iostream>
using namespace std;

bool IsPosNum(int num) {
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void) {
	bool isTrue;
	int num;
	cout << "���ڸ� �Է����ּ���:";
	cin >> num;

	isTrue = IsPosNum(num);
	if (isTrue)
		cout << "����Դϴ�." << endl;
	else
		cout << "����� �ƴմϴ�." << endl;
	return 0;
}
//0718TypeBool02.cpp