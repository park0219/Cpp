/*
cin을 활용해서 height, weight 변수(double형) 에 각각
키와 체중을 입력했을때 BMI지수를 result 변수(double형)에 받아주세요.
그리고 result변수에 저장된 값이 23.0 이상이면 bool 자료형
true를, 23미만이면 false를 health 변수(bool 자료형)에 저장해주세요.
health 변수에 저장된 값이 true면
건강을 위해 체중 조절이 필요합니다. 라고 출력해주시고
health 변수에 저장된 값이 false라면
BMI지수는 양호하지만 건강관리는 계속 신경써주세요
라고 출력하는 코드를 작성해주세요.
BMI 지수 공식은 ==> 체중 / (키(m)) ^2 입니다.
ex) 키가 168cm면 키는 1.68^2 을 해야함
*/
#include <iostream>
using namespace std;

bool TestResult(double bmi) {
	if (bmi >= 23)
		return true;
	else
		return false;
}

int main(void) {
	double cm, kg;
	cout << "체중을 입력해주세요";
	cin >> kg;
	cout << "키를 cm로 입력해주세요";
	cin >> cm;
	double m = cm / 100;

	double result = kg / (m * m);

	bool bmiresult = TestResult(result);
	if (bmiresult)
		cout << "건강을 위해 체중 조절이 필요합니다." << endl;
	else
		cout << "BMI지수는 양호하지만 건강관리에 신경써주세요." << endl;
	return 0;
}