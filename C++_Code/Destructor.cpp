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
		cout << "����� ������ : " << name << endl;
		cout << "����� ���̴� : " << age << endl;
	}
	//�Ҹ��ڴ� �������Լ� ������ ���ʿ� ~�� �ٿ��� �����
	~Man() {
		//���� ������ �Ҹ� ������ �ݴ�(Stack)
		//����: m1 -> m2
		//�Ҹ�: m2 -> m1
		delete[ ] name;
		cout << "�Ҹ��� ȣ�� Ȯ��" << endl;
	}
};

int main(void) {
	Man m1("donald trunp", 53);
	Man m2("xi jin ping", 42);
	m1.ShowPersonInfo();
	m2.ShowPersonInfo();
	return 0;
}
