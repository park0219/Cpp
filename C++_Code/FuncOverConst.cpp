#include <iostream>
using namespace std;

class ConstOver {
private:
	int num;
public:
	ConstOver(int n) : num(n) {
		cout << "객체 생성 완료 : " << num << endl;
	}
	void Add(int n) {
		cout << num << "에 " << n << "더하기 완료" << endl;
		this->num += n;
	}
	void ShowData() {
		cout << "const가 없는 함수 : " << num << endl;
	}
	void ShowData() const {
		cout << "const가 있는 함수 : " << num << endl;
	}
};

int main(void) {
	ConstOver c1(1);
	const ConstOver c2(2);

	c1.Add(5);
	//	c2.Add(1);

	c1.ShowData();
	c2.ShowData();

	return 0;
}