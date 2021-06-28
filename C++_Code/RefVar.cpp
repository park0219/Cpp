#include <iostream>
using namespace std;

int main(void) {
	int num1 = 234;
	//num1 변수에 num2, num3, num4 별명을 새롭게 부여함
	int &num2 = num1;
	int &num3 = num2;
	int &num4 = num3;

	num2 += 500;
	num3 += 100;
	num4 += 10;
	cout << "원본변수명 : " << num1 << endl;
	cout << "참조자변수명 : " << num2 << endl;
	return 0;
}
//0718RefVar.cpp