#include <iostream>
using namespace std;

#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10
#define ID_LEN 20
#define MAX_SPD 200

struct Car {

	char gamerID[ID_LEN];
	int fuelgauge;
	int curSpeed;

	void showCarstate() {
		cout << "ID: " << gamerID << endl;
		cout << "연료: " << fuelgauge << endl;
		cout << "속도: " << curSpeed << endl;
	}
	void Accel() {
		if (fuelgauge <= 0) {
			return;
		}
		else {
			fuelgauge -= FUEL_STEP;
		}
		if (curSpeed + ACC_STEP >= MAX_SPD) {
			curSpeed = MAX_SPD;
			return;
		}
		curSpeed += ACC_STEP;
	}

	void Break() {
		if (curSpeed < BRK_STEP) {
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
	}

};

int main() {

	Car car = {"speed", 100,0};
	car.Accel();
	car.Accel();
	car.Accel();
	car.Break();
	car.showCarstate();

	return 0;
}