#include <iostream>
using namespace std;

void Swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "n1, n2 : " << n1 << ", " << n2 << endl;
}
int main(void) {
	int num1 = 1;
	int num2 = 2;
	cout << "num1, num2 : " << num1 << ", " << num2 << endl;
	Swap(num1, num2);	//num1, num2값 변경 시도
	cout << "num1, num2 : " << num1 << ", " << num2 << endl;
	return 0;
}
//0718CallByValueExam.cpp