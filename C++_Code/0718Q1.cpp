/*
cin�� Ȱ���ؼ� height, weight ����(double��) �� ����
Ű�� ü���� �Է������� BMI������ result ����(double��)�� �޾��ּ���.
�׸��� result������ ����� ���� 23.0 �̻��̸� bool �ڷ���
true��, 23�̸��̸� false�� health ����(bool �ڷ���)�� �������ּ���.
health ������ ����� ���� true��
�ǰ��� ���� ü�� ������ �ʿ��մϴ�. ��� ������ֽð�
health ������ ����� ���� false���
BMI������ ��ȣ������ �ǰ������� ��� �Ű���ּ���
��� ����ϴ� �ڵ带 �ۼ����ּ���.
BMI ���� ������ ==> ü�� / (Ű(m)) ^2 �Դϴ�.
ex) Ű�� 168cm�� Ű�� 1.68^2 �� �ؾ���
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
	cout << "ü���� �Է����ּ���";
	cin >> kg;
	cout << "Ű�� cm�� �Է����ּ���";
	cin >> cm;
	double m = cm / 100;

	double result = kg / (m * m);

	bool bmiresult = TestResult(result);
	if (bmiresult)
		cout << "�ǰ��� ���� ü�� ������ �ʿ��մϴ�." << endl;
	else
		cout << "BMI������ ��ȣ������ �ǰ������� �Ű���ּ���." << endl;
	return 0;
}