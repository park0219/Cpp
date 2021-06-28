/*
문제 1.
참조자 문법을 이용해서 int형 자료인 num에
별칭을 2개 붙여보세요.

붙인 별칭을 이용해 값도 변경해보고 화면에 출력도
해 보세요.
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