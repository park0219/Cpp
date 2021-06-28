#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(Location &ul, Location &lr) {
	if (ul.getX() > lr.getX() || ul.getY() > lr.getY()) {
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::showRecinfo() {
	cout << "�� ���: " << '[' << upLeft.getX() << ',';
	cout << upLeft.getY() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.getX() << ',';
	cout << lowRight.getY() << ']' << endl << endl;
}