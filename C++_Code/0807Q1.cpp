#include <iostream>
using namespace std;

class Father {
public:
	void speakKorean() {
		cout << "�ѱ�� ���մϴ�" << endl;
	}
};

class Mother {
public:
	void speakEnglish() {
		cout << "��� ���մϴ�" << endl;
	}
};

class Child : public Father, public Mother {

};

int main() {

	Child c1;
	c1.speakKorean();
	c1.speakEnglish();

	return 0;
}