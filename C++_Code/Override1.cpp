#include <iostream>
using namespace std;

class Phone {
public:
	void call() {
		cout << "���� ��ȭ�� �̴ϴ�." << endl;
	}
};
class CellPhone : public Phone {
public:
	void call() {
		cout << "���� ��ȭ�� �̴ϴ�." << endl;
	}
};
class SmartPhone : public CellPhone {
public:
	void call() {
		cout << "���� ��ȭ�� �̴ϴ�." << endl;
	}
};

int main(void) {
	SmartPhone sp1;
	CellPhone cp1;
	Phone p1;
	p1.call();
	cp1.call();
	sp1.call();
	cp1.Phone::call();
	sp1.CellPhone::call();
	return 0;
}
