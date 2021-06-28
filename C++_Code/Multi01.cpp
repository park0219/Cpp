#include <iostream>
using namespace std;

class Parent1 {
public:
	void function1() {
		cout << "부모 1의 함수" << endl;
	}
};

class Parent2 {
public:
	void function2() {
		cout << "부모 2의 함수" << endl;
	}
};

class Child : public Parent1, public Parent2 {
public:
	void childFunc() {
		cout << "자식쪽 요소도 사용 가능합니다." << endl;
	}
};

int main(void) {
	Child c1;
	c1.function1();
	c1.function2();
	c1.childFunc();
	return 0;
}
