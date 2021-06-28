#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

char *StrAlloc(int len) {
	char *str = (char *)malloc(sizeof(char) * len);
	//char* str = new char[len];
	return str;
}
int main(void) {
	char *str = StrAlloc(30);
	strcpy(str, "C++ new test");
	cout << str << endl;
	free(str);
	//delete[] str;
	return 0;
}
//0719NewDelete.cpp