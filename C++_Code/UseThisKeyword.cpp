#include <iostream>
using namespace std;

class UseThis {
private:
	int num1;
	int num2;
public:
	UseThis(int num1, int num2) : num1(num1), num2(num2) {
		//this->num1 = num1;
		//is->num2 = num2;
	}
	void ShowData() {
		cout << num1 << ' ' << num2 << endl;
	}
};

int main() {

	UseThis t1(3, 4);
	t1.ShowData();

	return 0;
}