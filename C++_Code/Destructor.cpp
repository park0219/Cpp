#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Man {
private:
	char *name;
	int age;
public:
	Man(const char *n, int a) {
		int length = strlen(n) + 1;
		name = new char[length];
		strcpy(name, n);
		age = a;
	}

	void ShowPersonInfo() {
		cout << "당신의 성함은 : " << name << endl;
		cout << "당신의 나이는 : " << age << endl;
	}
	//소멸자는 생성자함수 문법의 왼쪽에 ~를 붙여서 만든다
	~Man() {
		//저장 순서와 소멸 순서가 반대(Stack)
		//저장: m1 -> m2
		//소멸: m2 -> m1
		delete[ ] name;
		cout << "소멸자 호출 확인" << endl;
	}
};

int main(void) {
	Man m1("donald trunp", 53);
	Man m2("xi jin ping", 42);
	m1.ShowPersonInfo();
	m2.ShowPersonInfo();
	return 0;
}
