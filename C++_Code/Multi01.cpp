#include <iostream>
using namespace std;

class Parent1 {
public:
	void function1() {
		cout << "�θ� 1�� �Լ�" << endl;
	}
};

class Parent2 {
public:
	void function2() {
		cout << "�θ� 2�� �Լ�" << endl;
	}
};

class Child : public Parent1, public Parent2 {
public:
	void childFunc() {
		cout << "�ڽ��� ��ҵ� ��� �����մϴ�." << endl;
	}
};

int main(void) {
	Child c1;
	c1.function1();
	c1.function2();
	c1.childFunc();
	return 0;
}
