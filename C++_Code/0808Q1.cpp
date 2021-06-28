/*
child Ŭ������ ������ּ���.
childŬ������ age, height, weight
�� ���� ��������� �����ϴ�.
�����ڸ� �̿��ؼ� age�� height, weight��
���� �ʱ�ȭ �� �� �ֵ��� ������ּ���.

�׸��� child Ŭ������ operator�� �̿��ؼ�
���� ������ ���� �� ���� child Ŭ���� ����
����, Ű, ü���� ���� �� �ֵ��� ������ּ���.
*/
#include <iostream>
using namespace std;

class Child {
private:
	int age;
	int height;
	int weight;
public:
	Child(int age = 0, int height = 0, int weight = 0)
		:age(age), height(height), weight(weight) {
	}
	Child operator-(Child &ch) {
		Child child(age - ch.age,
			height - ch.height, weight - ch.weight);
		return child;
	}
	void ShowChild() {
		cout << "-------------" << endl;
		cout << "Ű : " << height << endl;
		cout << "ü�� : " << weight << endl;
		cout << "���� : " << age << endl;
	}
};
int main(void) {
	Child ch1(10, 135, 42);
	Child ch2(20, 176, 72);
	Child ch3 = ch2 - ch1;
	ch1.ShowChild();
	ch2.ShowChild();
	ch3.ShowChild();
	return 0;
}