#include <iostream>
#include "Location.h"
#include "Rectangle.h"
using namespace std;

int main(void) {
	Location loc1;
	if (!loc1.InitMembers(-2, 4))
		cout << "�ʱ�ȭ ����" << endl;
	if (!loc1.InitMembers(2, 4))
		cout << "�ʱ�ȭ ����" << endl;

	Location loc2;
	if (!loc2.InitMembers(5, 9))
		cout << "�ʱ�ȭ ����" << endl;

	Rectangle rec;
	if (!rec.InitMembers(loc2, loc1))
		cout << "���簢�� �ʱ�ȭ ����21" << endl;
	if (!rec.InitMembers(loc1, loc2))
		cout << "���簢�� �ʱ�ȭ ����12" << endl;
	rec.showRecinfo();
	return 0;
}
//RectangleOK.cpp