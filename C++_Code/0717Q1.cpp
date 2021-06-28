/*
이름공간 문법을 이용해서 같은 이름의 변수 2개 이상,
같은 이름의 함수 2개 이상이 한 파일 내부에 존재하도록
만들어주세요.
단 함수는 오버로딩을 허용하지 않습니다.
*/
#include <iostream>
using namespace std;

namespace AAA {
	int num = 5;
	void ShowNum(int a) {
		cout << a << endl;
		cout << "AAA의 함수입니다." << endl;
	}
}

namespace BBB {
	int num = 10;
	void ShowNum(int a) {
		cout << a << endl;
		cout << "BBB의 함수입니다." << endl;
	}
}

int main(void) {
	AAA::ShowNum(AAA::num);
	BBB::ShowNum(BBB::num);
	return 0;
}