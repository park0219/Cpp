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
	cout << "���� num1�� ������ ���� �Է����ּ���.";
	cin >> A::BB::CCC::num1;
	cout << A::BB::CCC::num1 << endl;

	namespace ABC = A::BB::CCC;
	cout << "���� name�� ������ ���� �Է����ּ���.";
	cin >> ABC::name;
	cout << ABC::name << endl;
	cout << ABC::num1 << endl;
	return 0;
}
//0717ShortNamespace.cpp