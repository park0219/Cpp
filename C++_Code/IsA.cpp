#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Chef {
public:
	void handle() {
		cout << "셰프가 재료를 다듬습니다." << endl;
	}
	void plate() {
		cout << "셰프가 요리를 플레이팅합니다." << endl;
	}
	void clean() {
		cout << "셰프가 뒷정리를 합니다." << endl;
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
		cout << "한식 셰프가 " << menu << "를 만듭니다." << endl;
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
		cout << "중식 셰프가 " << menu << "를 만듭니다." << endl;
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
		cout << "일식 셰프가 " << menu << "를 만듭니다." << endl;
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
		cout << "양식 셰프가 " << menu << "를 만듭니다." << endl;
		plate();
		clean();
	}
};
int main(void) {
	KoreanChef kchef("평양냉면");
	kchef.cook();
	cout << endl;
	ChineseChef cchef("짜장면");
	cchef.cook();
	cout << endl;
	JapaneseChef jchef("스시");
	jchef.cook();
	cout << endl;
	westernChef wchef("스테이크");
	wchef.cook();
	cout << endl;

	return 0;
}
