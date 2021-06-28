#include <iostream>
using namespace std;

class MutableTest {
private:
	int num1;
	mutable int num2;
public:
	MutableTest(int num1, int num2) : num1(num1), num2(num2) {}
	void ShowData() const {
		cout << num1 << ", " << num2 << endl;
	}
	void AddNum2() const {	//const 함수는 함수내부의 변수의 값 변경이 안되지만 mutable 때문에 가능해짐
		num2++;
	}
};

int main() {

	MutableTest m1(1, 2);
	m1.ShowData();
	m1.AddNum2();
	m1.ShowData();

	return 0;
}