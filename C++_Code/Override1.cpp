#include <iostream>
using namespace std;

class Phone {
public:
	void call() {
		cout << "유선 전화를 겁니다." << endl;
	}
};
class CellPhone : public Phone {
public:
	void call() {
		cout << "무선 전화를 겁니다." << endl;
	}
};
class SmartPhone : public CellPhone {
public:
	void call() {
		cout << "영상 통화를 겁니다." << endl;
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
