#include <iostream>
using namespace std;

class ConstFunction {
private:
	int num;
public:
	ConstFunction(int n) : num(n) {
		cout << "객체 생성 완료" << endl;
	}
	void Add(int n) {
		cout << num << "에 " << n;
		this->num += n;
		cout << "만큼 더했습니다." << endl;
	}
	void ShowData() const {
		cout << "현재 num의 값 : " << num << endl;
	}
};

int main(void) {
	const ConstFunction c1(1);
	//c1.Add(5); 값 변경 불가 const 
	c1.ShowData();
	return 0;
}