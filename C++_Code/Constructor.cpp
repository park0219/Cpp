#include <iostream>
using namespace std;

class Test {
	int n1;
	int n2;
public:
	Test() {
		n1 = 0;
		n2 = 0;
	}
	Test(int n) {
		n1 = n;
		n2 = 0;
	}
	Test(int num1, int num2) {
		n1 = num1;
		n2 = num2;
	}
	void ShowData() {
		cout << n1 << ' ' << n2 << endl;
	}
};

int main() {

	Test t1;
	t1.ShowData();

	Test t2(1);
	t2.ShowData();

	Test t3(10, 20);
	t3.ShowData();

	return 0;
}