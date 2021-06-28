#include <iostream>
using namespace std;

class GCTest {
private:
	int num;
public:
	GCTest(int n) : num(n) {
		cout << "객체 생성 및 숫자대입: " << num << endl;
	}
	~GCTest() {
		cout << "객체 소멸" << endl;
	}
	void ShowData() {
		cout << "객체 내부에 저장된 숫자: " << num << endl;
	}
};

int main() {

	GCTest(1);
	cout << "1번 객체 테스트 완료" << endl;

	GCTest(2);
	cout << "2번 객체 테스트 완료" << endl;

	const GCTest &ref = GCTest(3);
	cout << "3번 객체 테스트 완료" << endl;

	return 0;
}