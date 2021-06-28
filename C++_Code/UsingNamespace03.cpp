#include <iostream>
using namespace std;

int main(void) {
	char name[50];
	cout << "당신의 이름은?" << endl;
	cin >> name;
	cout << "당신의 이름은 " << name << "입니다." << endl;
	cout << "cout, endl, cin에 대해서";
	cout << "이름공간을 생략하고 싶다면" << endl;
	cout << "Using 문법을 쓰셔야 합니다." << endl;
	return 0;
}
//0717UsingNamespace03.cpp