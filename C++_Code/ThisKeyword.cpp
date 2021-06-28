#include <iostream>
using namespace std;

class ThisTest {
	int num;
public:
	ThisTest(int n) : num(n) {
		cout << "num의 값" << num << endl;
		cout << "this의 값" << this << endl << endl;
	}
	void ShowNum() {
		cout << num << endl;
	}
	ThisTest *GetThis() {
		return this;
	}
};

int main(void) {
	ThisTest t1(1);
	ThisTest *ptr1 = t1.GetThis();
	cout << ptr1 << endl;
	ptr1->ShowNum();

	ThisTest t2(2);
	ThisTest *ptr2 = t2.GetThis();
	cout << ptr2 << endl;
	ptr2->ShowNum();
	return 0;
}
