#include <iostream>
using namespace std;

class Computer {
public:
	void computer() {
		cout << "��ǻ�ͷ� ����� �մϴ�" << endl;
	}
};

class Notebook : public Computer {
public:
	void moveCompute() {
		cout << "��Ʈ���� ���ٴϸ鼭 ����մϴ�" << endl;
	}
};

int main() {

	Notebook n1;
	Computer& cp = n1;
	cp.computer();

	return 0;
}