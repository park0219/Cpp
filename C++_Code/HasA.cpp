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
		cout << "Į�� ��Ḧ �ٵ���ϴ�." << endl;
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
			cout << "Į�� �����ϴ�." << endl;
		}
		else {
			knife->handle();
		}
	}
	void upCf() {
		if (knife == NULL) {
			cout << "Į�� �����ϴ�." << endl;
		}
		else {
			knife->setCf(10);
			cout << "Į�� ���� ������� �÷Ƚ��ϴ�." << endl;
		}
	}

	~Chef() {
		if (knife != NULL) {
			delete knife;
			cout << "Į ��ü�� �����Ҵ� �����߽��ϴ�." << endl;
		}
		else {
			cout << "�����Ҵ� ������ ��ü�� �����ϴ�." << endl;
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