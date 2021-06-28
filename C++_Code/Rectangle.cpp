#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(Location &ul, Location &lr) {
	if (ul.getX() > lr.getX() || ul.getY() > lr.getY()) {
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::showRecinfo() {
	cout << "좌 상단: " << '[' << upLeft.getX() << ',';
	cout << upLeft.getY() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.getX() << ',';
	cout << lowRight.getY() << ']' << endl << endl;
}