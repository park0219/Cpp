#include <iostream>
using namespace std;

class Parent1 {
public:
	void function() {
		cout << "Parent1�� �Լ��Դϴ�." << endl;
	}
};

class Parent2 {
public:
	void function() {
		cout << "Parent2�� �Լ��Դϴ�." << endl;
	}
};

class Child : public Parent1, public Parent2 {

};
int main(void) {
	Child c1;
	c1.Parent1::function();
	c1.Parent2::function();
	return 0;
}
