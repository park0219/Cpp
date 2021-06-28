#include <iostream>
using namespace std;

int &ReturnRef(int &ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int &ref1 = ReturnRef(num1);

	num1++;
	ref1++;
	cout << "num1: " << num1 << endl;
	cout << "ref1: " << ref1 << endl;
	return 0;
}
//0719ReturnRef01.cpp