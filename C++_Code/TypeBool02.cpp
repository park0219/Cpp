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
	cout << "숫자를 입력해주세요:";
	cin >> num;

	isTrue = IsPosNum(num);
	if (isTrue)
		cout << "양수입니다." << endl;
	else
		cout << "양수가 아닙니다." << endl;
	return 0;
}
//0718TypeBool02.cpp