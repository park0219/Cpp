#include <iostream>
using namespace std;

#define FUEL_STEP   2
#define   MAX_SPD   200
#define   ACC_STEP   10
#define   BRK_STEP   10
#define   ID_LEN   20

struct Car {
	char gamerID[ID_LEN];   //유저 ID
	int fuelGauge;   //연료
	int curSpeed;   //현재속도
};

void ShowCarState(Car &car) {
	cout << "ID: " << car.gamerID << endl;
	cout << "연료: " << car.fuelGauge << "%" << endl;
	cout << "현재속도 : " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car &car) {
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD) {
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car &car) {
	if (car.curSpeed < BRK_STEP) {
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void) {
	Car car1 = {"race1234", 100, 0};
	Accel(car1);
	Accel(car1);
	ShowCarState(car1);
	Break(car1);

	Car car2 = {"winners1", 100, 0};
	Accel(car2);
	Break(car2);
	ShowCarState(car2);
	return 0;
}
//0722StructCar.cpp