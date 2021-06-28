#include <iostream>
using namespace std;

class Computer {
private:
	int ram;
public:
	Computer(int ram) {
		this->ram = ram;
	}
	int getRam() {
		return ram;
	}
};

class Noteboook : public Computer {
private:
	int battery;
public:
	Noteboook(int ram, int battery) : Computer(ram) {
		this->battery = battery;
	}
	void ShowData() {
		cout << "��ǻ�� ���� " << getRam() << "gb �Դϴ�" << endl;
		cout << "���͸��� " << battery << " % ���ҽ��ϴ�" << endl;
	}
};

int main() {


	Noteboook notebook(16, 100);
	notebook.ShowData();

	return 0;
}