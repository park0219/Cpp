#include <iostream>
using namespace std;

class Mobile {
public:
	void sit() {
		cout << "Ż �Ϳ� ž�ϴ�." << endl;
	}
};

class Bicycle : public Mobile {
public:
	void ride() {
		cout << "�����Ÿ� ���ϴ�." << endl;
	}
};

class BatteryBicycle : public Bicycle {
public:
	void motorRide() {
		cout << "���� �����Ÿ� ž�ϴ�." << endl;
	}
};

int main(void) {
	Mobile* m1 = new Bicycle;
	Mobile* m2 = new BatteryBicycle;
	Bicycle* b1 = new BatteryBicycle;
	m1->sit();
	m2->sit();
	b1->ride();
	b1->sit();

	/*
	Bicycle* b2 = new Mobile();
	BatteryBicycle* bb1 = new Mobile();
	BatteryBicycle* bb2 = new Mobile();
	*/
	return 0;
}