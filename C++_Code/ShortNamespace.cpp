#include <iostream>
using namespace std;

namespace A {
	namespace BB {
		namespace CCC {
			int num1;
			char name[50];
		}
	}
}
int main(void) {
	cout << "변수 num1에 대입할 값을 입력해주세요.";
	cin >> A::BB::CCC::num1;
	cout << A::BB::CCC::num1 << endl;

	namespace ABC = A::BB::CCC;
	cout << "변수 name에 대입할 값을 입력해주세요.";
	cin >> ABC::name;
	cout << ABC::name << endl;
	cout << ABC::num1 << endl;
	return 0;
}
//0717ShortNamespace.cpp