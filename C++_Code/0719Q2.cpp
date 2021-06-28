/*
#include <cstdio>
#include <iostream>

void Swap(int * ptr1, int * ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);
	Swap(&num1, &num2);	//num1과 num2에 저장된 값이 서로 바뀌길 기대!
	printf("num1 num2: %d %d \n", num1, num2);
	system("pause");
	return 0;
}
위 코드를 참조자를 활용한 call by reference 코드로 변경해보세요.
*/
#include <cstdio>
#include <iostream>

void Swap(int &num1, int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);
	Swap(num1, num2);	//num1과 num2에 저장된 값이 서로 바뀌길 기대!
	printf("num1 num2: %d %d \n", num1, num2);
	system("pause");
	return 0;
}