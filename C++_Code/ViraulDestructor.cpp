#include <iostream>
using namespace std;

class Computer {
public:
	virtual void compute() {
		cout << "��ǻ�Ͱ� ����ó���� �մϴ�" << endl;
	}
	virtual ~Computer() {
		cout << "��ǻ�� ��ü �Ҹ� �Ϸ�" << endl;
	}
};

class Notebook : public Computer {
public:
	virtual void compute() {
		cout << "�ܺο��� ��Ʈ������ ����մϴ�" << endl;
	}
	~Notebook() {
		cout << "��Ʈ�� ��ü �Ҹ� �Ϸ�" << endl;
	}
};

int main() {

	Computer* computer;
	computer = new Notebook;
	computer->compute();
	delete computer;

	return 0;
}