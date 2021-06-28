#include <iostream>
using namespace std;

class CopyCon {
private:
	int num1;
	int num2;
public:
	CopyCon(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
	CopyCon(CopyCon &copycon) : num1(copycon.num1), num2(copycon.num2) {
		cout << "��������ڸ� �̿��� ����" << endl;
	}
	void ShowData() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main() {

	CopyCon c1(1, 2);
	cout << "�Ϲ� ������ c1 ��ü ����" << endl;
	CopyCon c2 = c1;
	cout << "���� ������ c2 ��ü ����" << endl;
	c1.ShowData();
	c2.ShowData();

	return 0;
}