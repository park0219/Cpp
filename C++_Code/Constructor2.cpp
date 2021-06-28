#include <iostream>
using namespace std;

class Test {
private:
	int n1;
	int n2;
public:
	Test(int num1, int num2) :n1(num1) {
		n2 = num2;
		cout << "초기화 완료" << endl;
	}
	void ShowData() {
		cout << n1 << ' ' << n2 << endl;
	}
};

int main() {

	Test t1(10, 20);
	t1.ShowData();

	return 0;
}