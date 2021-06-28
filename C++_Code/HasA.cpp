#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Knife {
private:
	int CuttingForce;
public:
	Knife(int cf)
		: CuttingForce(cf) {}
	void handle() {
		cout << "칼로 재료를 다듬습니다." << endl;
	}
	void setCf(int cf) {
		CuttingForce += cf;
	}
};

class Chef {
private:
	Knife* knife;
public:
	Chef(int cf) {
		if (cf > 0) {
			knife = new Knife(cf);
		}
		else {
			knife = NULL;
		}
	}
	void handleingre() {
		if (knife == NULL) {
			cout << "칼이 없습니다." << endl;
		}
		else {
			knife->handle();
		}
	}
	void upCf() {
		if (knife == NULL) {
			cout << "칼이 없습니다." << endl;
		}
		else {
			knife->setCf(10);
			cout << "칼을 갈아 절삭력을 올렸습니다." << endl;
		}
	}

	~Chef() {
		if (knife != NULL) {
			delete knife;
			cout << "칼 객체를 동적할당 해제했습니다." << endl;
		}
		else {
			cout << "동적할당 해제할 객체가 없습니다." << endl;
		}
	}
};

int main(void) {
	Chef c1(0);
	c1.handleingre();
	c1.upCf();

	Chef c2(5);
	c2.handleingre();
	c2.upCf();
	return 0;
}