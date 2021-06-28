#include <iostream>
using namespace std;

class Grand {
public:
	Grand() {
		cout << "�θ��� �θ� ��ü ����" << endl;
	}
	void grandFunc() {
		cout << "�θ��� �θ� ��� ȣ��" << endl;
	}
};

class Parent1 : virtual public Grand {
public:
	Parent1()
		: Grand() {
		cout << "�θ�1 ��ü ����" << endl;
	}
	void parent1Func() {
		cout << "1�� �θ� ��� ȣ��" << endl;
	}
};

class Parent2 : virtual public Grand {
public:
	Parent2()
		: Grand() {
		cout << "�θ� 2 ��ü ����" << endl;
	}
	void parent2Func() {
		cout << "2�� �θ� ��� ȣ��" << endl;
	}
};

class Child : public Parent1, public Parent2 {
public:
	Child() {
		cout << "�ڽ� ��ü ����" << endl;
	}
	void childFunc() {
		cout << "�ڽ� ��� ȣ��" << endl;
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
