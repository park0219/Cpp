#include <iostream>
using namespace std;

int member2Num = 0;

class Member {
private:
	static int memberNum;
public:
	Member() {
		memberNum++;
		cout << memberNum << "��° ȸ�������� �����մϴ�." << endl;
	}
};
int Member::memberNum = 0;

class Member2 {
public:
	Member2() {
		member2Num++;
		cout << member2Num << "��° ȸ�������� �����մϴ�." << endl;
	}
};

int main(void) {
	Member m1;
	Member m2;
	Member2 m3;
	member2Num += 10000;
	Member2 m4;
	Member();
	return 0;
}
