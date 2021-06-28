#include <iostream>
using namespace std;

void Swap(int *ptr1, int *ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {
	int num1 = 1;
	int num2 = 2;
	cout << "num1, num2 : " << num1 << ", " << num2 << endl;
	Swap(&num1, &num2);
	cout << "num1, num2 : " << num1 << ", " << num2 << endl;
	return 0;
}
//0718CallByRefExam.cpp

