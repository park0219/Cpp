#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Chef {
public:
	void handle() {
		cout << "������ ��Ḧ �ٵ���ϴ�." << endl;
	}
	void plate() {
		cout << "������ �丮�� �÷������մϴ�." << endl;
	}
	void clean() {
		cout << "������ �������� �մϴ�." << endl;
	}
};

class KoreanChef : public Chef {
private:
	char menu[100];
public:
	KoreanChef(const char* menu) {
		strcpy(this->menu, menu);
	}
	void cook() {
		handle();
		cout << "�ѽ� ������ " << menu << "�� ����ϴ�." << endl;
		plate();
		clean();
	}
};

class ChineseChef : public Chef {
private:
	char menu[100];
public:
	ChineseChef(const char* menu) {
		strcpy(this->menu, menu);
	}
	void cook() {
		handle();
		cout << "�߽� ������ " << menu << "�� ����ϴ�." << endl;
		plate();
		clean();
	}
};

class JapaneseChef : public Chef {
private:
	char menu[100];
public:
	JapaneseChef(const char* menu) {
		strcpy(this->menu, menu);
	}
	void cook() {
		handle();
		cout << "�Ͻ� ������ " << menu << "�� ����ϴ�." << endl;
		plate();
		clean();
	}
};

class westernChef : public Chef {
private:
	char menu[100];
public:
	westernChef(const char* menu) {
		strcpy(this->menu, menu);
	}
	void cook() {
		handle();
		cout << "��� ������ " << menu << "�� ����ϴ�." << endl;
		plate();
		clean();
	}
};
int main(void) {
	KoreanChef kchef("���ø�");
	kchef.cook();
	cout << endl;
	ChineseChef cchef("¥���");
	cchef.cook();
	cout << endl;
	JapaneseChef jchef("����");
	jchef.cook();
	cout << endl;
	westernChef wchef("������ũ");
	wchef.cook();
	cout << endl;

	return 0;
}
