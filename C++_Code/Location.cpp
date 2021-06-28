#include <iostream>
#include "Location.h"
using namespace std;

bool Location::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	y = ypos;
	return true;
}

int Location::getX() {
	return x;
}
int Location::getY() {
	return y;
}
bool Location::setX(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Location::setY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}
