#include <iostream>
using namespace std;

class Chef {
public:
	virtual void cook() = 0;	//���������Լ� -> �߻�Ŭ����
};

class KoreanChef : public Chef {
public:
	void cook() {
		cout << "�ѱ� �丮�簡 �ѱ� �丮�� �մϴ�" << endl;
	}
};

class ChineseChef : public Chef {
public:
	void cook() {
		cout << "�߱� �丮�簡 �߱� �丮�� �մϴ�" << endl;
	}
};

class ThaiCef : public Chef {
	void cook() {
		cout << "�±� �丮�簡 �±� �丮�� �մϴ�" << endl;
	}
};

class ItalianChef : public Chef {
public:
	void cook() {
		cout << "��Ż���� �丮�簡 ��Ż���� �丮�� �մϴ�" << endl;
	}
};

int main(void) {

	Chef* chef = new KoreanChef;
	chef->cook();
	chef = new ChineseChef;
	chef->cook();
	chef = new ThaiCef;
	chef->cook();
	chef = new ItalianChef;
	chef->cook();
	return 0;
}
