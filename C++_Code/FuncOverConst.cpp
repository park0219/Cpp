#include <iostream>
using namespace std;

class ConstOver {
private:
	int num;
public:
	ConstOver(int n) : num(n) {
		cout << "��ü ���� �Ϸ� : " << num << endl;
	}
	void Add(int n) {
		cout << num << "�� " << n << "���ϱ� �Ϸ�" << endl;
		this->num += n;
	}
	void ShowData() {
		cout << "const�� ���� �Լ� : " << num << endl;
	}
	void ShowData() const {
		cout << "const�� �ִ� �Լ� : " << num << endl;
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