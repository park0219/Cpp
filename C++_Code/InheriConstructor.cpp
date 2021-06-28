#include <iostream>
using namespace std;

class Airplane {
private:
	int speed;
public:
	Airplane(int speed) {
		this->speed = speed;
	}
	void fly() {
		cout << "����Ⱑ " << speed;
		cout << " �ӵ��� ���ư��ϴ�." << endl;
	}
};

class JetAirplane : public Airplane {
private:
	int jetSpeed;
public:
	JetAirplane(int speed, int jetSpeed) : Airplane(speed) {
		this->jetSpeed = jetSpeed;
	}
	void jetFly() {
		cout << "����Ⱑ " << jetSpeed;
		cout << " �ӵ��� ��Ʈ������ �մϴ�." << endl;
	}
};

int main() {

	JetAirplane jet(500, 900);
	jet.fly();
	jet.jetFly();

	return 0;
}