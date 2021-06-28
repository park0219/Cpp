#include <iostream>
using namespace std;

class Father {
public:
	void speakKorean() {
		cout << "한국어를 말합니다" << endl;
	}
};

class Mother {
public:
	void speakEnglish() {
		cout << "영어를 말합니다" << endl;
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