#include <iostream>
using namespace std;

namespace CAR_CONST {
	enum {
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

struct Car {
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarstate() {
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << endl;
		cout << "현재속도: " << curSpeed << endl;
	}

	void Accel() {
		if (fuelGauge <= 0) {
			return;
		}
		else {
			fuelGauge -= CAR_CONST::FUEL_STEP;
		}

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}
		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break() {
		if (curSpeed < CAR_CONST::BRK_STEP) {
			curSpeed = 0;
			return;
		}
		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main() {

	Car car1 = {"winners1",100,0};
	car1.Accel();
	car1.Accel();
	car1.ShowCarstate();
	car1.Break();
	car1.ShowCarstate();

	Car car2 = {"speed7",100,0};
	car2.Accel();
	car2.Break();
	car2.ShowCarstate();
	return 0;

	return 0;
}