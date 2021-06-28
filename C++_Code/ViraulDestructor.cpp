#include <iostream>
using namespace std;

class Computer {
public:
	virtual void compute() {
		cout << "컴퓨터가 연산처리를 합니다" << endl;
	}
	virtual ~Computer() {
		cout << "컴퓨터 객체 소멸 완료" << endl;
	}
};

class Notebook : public Computer {
public:
	virtual void compute() {
		cout << "외부에서 노트북으로 계산합니다" << endl;
	}
	~Notebook() {
		cout << "노트북 객체 소멸 완료" << endl;
	}
};

int main() {

	Computer* computer;
	computer = new Notebook;
	computer->compute();
	delete computer;

	return 0;
}