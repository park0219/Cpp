#include <iostream>
using namespace std;

class ConstFunction {
private:
	int num;
public:
	ConstFunction(int n) : num(n) {
		cout << "��ü ���� �Ϸ�" << endl;
	}
	void Add(int n) {
		cout << num << "�� " << n;
		this->num += n;
		cout << "��ŭ ���߽��ϴ�." << endl;
	}
	void ShowData() const {
		cout << "���� num�� �� : " << num << endl;
	}
};

int main(void) {
	const ConstFunction c1(1);
	//c1.Add(5); �� ���� �Ұ� const 
	c1.ShowData();
	return 0;
}