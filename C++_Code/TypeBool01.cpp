#include <iostream>
using namespace std;

int main(void) {
	int a = 100;

	cout << "참(true) : " << true << endl;
	cout << "거짓(false) : " << false << endl;

	if (true) {
		cout << "불 자료는 조건식의 결과값을 대신합니다." << endl;
	}

	cout << "정수 1의 크기 : " << sizeof(1) << endl;
	cout << "정수 0의 크기 : " << sizeof(0) << endl;
	cout << "true의 크기 : " << sizeof(true) << endl;
	cout << "false의 크기 : " << sizeof(false) << endl;
	return 0;
}
//0718TypeBool01.cpp