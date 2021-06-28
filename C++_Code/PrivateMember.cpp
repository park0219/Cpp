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
		cout << "컴퓨터 램은 " << getRam() << "gb 입니다" << endl;
		cout << "배터리는 " << battery << " % 남았습니다" << endl;
	}
};

int main() {


	Noteboook notebook(16, 100);
	notebook.ShowData();

	return 0;
}