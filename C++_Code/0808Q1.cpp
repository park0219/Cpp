/*
child 클래스를 만들어주세요.
child클래스는 age, height, weight
세 개의 멤버변수를 가집니다.
생성자를 이용해서 age와 height, weight를
직접 초기화 할 수 있도록 만들어주세요.

그리고 child 클래스에 operator를 이용해서
빼기 연산을 통해 두 개의 child 클래스 간에
나이, 키, 체중을 빼줄 수 있도록 만들어주세요.
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
		cout << "키 : " << height << endl;
		cout << "체중 : " << weight << endl;
		cout << "나이 : " << age << endl;
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