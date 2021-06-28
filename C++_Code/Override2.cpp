#include <iostream>
using namespace std;

class Chef {
public:
	virtual void cook() = 0;	//순수가상함수 -> 추상클래스
};

class KoreanChef : public Chef {
public:
	void cook() {
		cout << "한국 요리사가 한국 요리를 합니다" << endl;
	}
};

class ChineseChef : public Chef {
public:
	void cook() {
		cout << "중국 요리사가 중국 요리를 합니다" << endl;
	}
};

class ThaiCef : public Chef {
	void cook() {
		cout << "태국 요리사가 태국 요리를 합니다" << endl;
	}
};

class ItalianChef : public Chef {
public:
	void cook() {
		cout << "이탈리아 요리사가 이탈리아 요리를 합니다" << endl;
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
