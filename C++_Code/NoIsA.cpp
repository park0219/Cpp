#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Knife {
private:
	int CuttingForce;
public:
	Knife(int cf) : CuttingForce(cf) {}
	void handle() {
		cout << "갈로 재료를 다듬습니다" << endl;
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
		cout << "칼을 갈아서 절삭력을 올렸습니다" << endl;
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