#include <iostream>
using namespace std;

class Std1;

class Std2 {
private:
	int num2;
	friend class Std1;	//Std1에게 Std2에 접근할 권한을 줌 //위치는 상관 없음
public:
	Std2(int n2) : num2(n2) {}
	void ShowNum1(Std1 &std1);
	//friend void Std1::ShowNum2(Std2& std2);
};

class Std1 {
private:
	int num1;
public:
	Std1(int n1) : num1(n1) {}
	void ShowNum2(Std2 &std);
	friend void Std2::ShowNum1(Std1 &std1);
	friend void ShowStd(Std1 &std);
};

void Std2::ShowNum1(Std1 &std1) {
	cout << "Std1의 num1값 : " << std1.num1 << endl;
}

void Std1::ShowNum2(Std2 &std2) {
	cout << "Std2의 num2값 : " << std2.num2 << endl;
}

void ShowStd(Std1 &std) {
	cout << "전역함수로 확인: " << std.num1 << endl;
}

int main(void) {
	Std1 std1(1);
	Std2 std2(2);

	std1.ShowNum2(std2);
	std2.ShowNum1(std1);
	return 0;
}