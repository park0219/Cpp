#include <iostream>
#include "Location.h"
#include "Rectangle.h"
using namespace std;

int main(void) {
	Location loc1;
	if (!loc1.InitMembers(-2, 4))
		cout << "초기화 실패" << endl;
	if (!loc1.InitMembers(2, 4))
		cout << "초기화 실패" << endl;

	Location loc2;
	if (!loc2.InitMembers(5, 9))
		cout << "초기화 실패" << endl;

	Rectangle rec;
	if (!rec.InitMembers(loc2, loc1))
		cout << "직사각형 초기화 실패21" << endl;
	if (!rec.InitMembers(loc1, loc2))
		cout << "직사각형 초기화 실패12" << endl;
	rec.showRecinfo();
	return 0;
}
//RectangleOK.cpp