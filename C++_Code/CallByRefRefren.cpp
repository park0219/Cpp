#include <iostream>
using namespace std;

void Swap(int &ref1, int &ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
int main(void) {
	int num1 = 1;
	int num2 = 2;
	Swap(num1, num2);
	cout << "num1 :" << num1 << endl;
	cout << "num2 :" << num2 << endl;
	return 0;
}
//0718CallByRefRefren.cpp