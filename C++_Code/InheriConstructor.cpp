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
		cout << "비행기가 " << speed;
		cout << " 속도로 날아갑니다." << endl;
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
		cout << "비행기가 " << jetSpeed;
		cout << " 속도로 제트비행을 합니다." << endl;
	}
};

int main() {

	JetAirplane jet(500, 900);
	jet.fly();
	jet.jetFly();

	return 0;
}