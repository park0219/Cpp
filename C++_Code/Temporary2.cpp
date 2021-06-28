#include <iostream>
using namespace std;

class TempObj {
private:
	int num;
public:
	TempObj(int n) :num(n) {
		cout << "임시객체 생성: " << num << endl;
	}
	TempObj &TempObjAdd(int num) {
		this->num += num;
		return *this;
	}
	void ShowData() {
		cout << "num: " << num << endl;
	}
};

int main() {
	TempObj t1(10);
	t1.TempObjAdd(20).ShowData();
	t1.ShowData();
	TempObj(20).TempObjAdd(15).ShowData();

	return 0;
}