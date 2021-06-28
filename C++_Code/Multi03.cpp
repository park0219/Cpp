#include <iostream>
using namespace std;

class Grand {
public:
	Grand() {
		cout << "부모의 부모 객체 생성" << endl;
	}
	void grandFunc() {
		cout << "부모의 부모 기능 호출" << endl;
	}
};

class Parent1 : virtual public Grand {
public:
	Parent1()
		: Grand() {
		cout << "부모1 객체 생성" << endl;
	}
	void parent1Func() {
		cout << "1번 부모 기능 호출" << endl;
	}
};

class Parent2 : virtual public Grand {
public:
	Parent2()
		: Grand() {
		cout << "부모 2 객체 생성" << endl;
	}
	void parent2Func() {
		cout << "2번 부모 기능 호출" << endl;
	}
};

class Child : public Parent1, public Parent2 {
public:
	Child() {
		cout << "자식 객체 생성" << endl;
	}
	void childFunc() {
		cout << "자식 기능 호출" << endl;
	}
};

int main(void) {
	Child c1;
	c1.grandFunc();
	c1.parent1Func();
	c1.parent2Func();
	c1.childFunc();
	return 0;
}
