#include <iostream>
using namespace std;

class GCTest {
private:
	int num;
public:
	GCTest(int n) : num(n) {
		cout << "��ü ���� �� ���ڴ���: " << num << endl;
	}
	~GCTest() {
		cout << "��ü �Ҹ�" << endl;
	}
	void ShowData() {
		cout << "��ü ���ο� ����� ����: " << num << endl;
	}
};

int main() {

	GCTest(1);
	cout << "1�� ��ü �׽�Ʈ �Ϸ�" << endl;

	GCTest(2);
	cout << "2�� ��ü �׽�Ʈ �Ϸ�" << endl;

	const GCTest &ref = GCTest(3);
	cout << "3�� ��ü �׽�Ʈ �Ϸ�" << endl;

	return 0;
}