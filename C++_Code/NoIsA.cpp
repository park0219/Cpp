#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Knife {
private:
	int CuttingForce;
public:
	Knife(int cf) : CuttingForce(cf) {}
	void handle() {
		cout << "���� ��Ḧ �ٵ���ϴ�" << endl;
	}
	void setCf(int cf) {
		CuttingForce += cf;
	}
};

class Chef : Knife {
public:
	Chef(int cf) : Knife(cf) {}
	void handleingre() {
		handle();
	}
	void upCf() {
		setCf(10);
		cout << "Į�� ���Ƽ� ������� �÷Ƚ��ϴ�" << endl;
	}
};

int main() {

	Chef c1(0);
	c1.handleingre();
	c1.upCf();

	Chef c2(5);
	c2.handleingre();
	c2.upCf();

	return 0;
}