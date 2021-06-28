#include <iostream>
using namespace std;

class Computer {
public:
	void computer() {
		cout << "컴퓨터로 계산을 합니다" << endl;
	}
};

class Notebook : public Computer {
public:
	void moveCompute() {
		cout << "노트북을 들고다니면서 계산합니다" << endl;
	}
};

int main() {

	Notebook n1;
	Computer& cp = n1;
	cp.computer();

	return 0;
}