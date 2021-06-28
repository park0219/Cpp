#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int num;
	std::cout << "num변수에 입력할 값을 작성해주세요" << endl;
	std::cin >> num;
	cout << "Hello c++!" << endl;
	cout << "Hello " << "c++" << std::endl;
	cout << num << 'Z';
	cout << ' ' << 1.234 << endl;
	return 0;
}
////0717UsingNamespace02.cpp