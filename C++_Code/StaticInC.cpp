#include <iostream>
using namespace std;

int num1 = 0;
void Count() {
	//static int num1 = 0; //데이터 영역(전역변수, static 변수 저장하는 곳)에 저장
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