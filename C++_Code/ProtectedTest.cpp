#include <iostream>
using namespace std;

class Parent {
private:
	int a;
protected:
	int b;
public:
	int c;
public:
	Parent(int a, int b, int c)
		: a(a), b(b), c(c) {}
};

class Middle : public Parent {
protected:
	int mid;
public:
	Middle(int a, int b, int c, int mid)
		: Parent(a, b, c), mid(mid) {}
	void showb() {
		cout << b << endl;
	}
};

class Child : public Middle {
public:
	Child(int a, int b, int c, int mid)
		: Middle(a, b, c, mid) {}
};

int main(void) {
	Child c1(1, 2, 3, 4);
	//cout << c1.a << endl;
	//cout << c1.b << endl;
	c1.showb();
	return 0;
}
