#include <iostream>
using namespace std;

class Location {
private:
	int x;
	int y;
public:
	Location(int x = 0, int y = 0)
		:x(x), y(y) {
		//���๮ ����
	}
	void showLoc() const {
		cout << "��ǥ��:" << x << "," << y << "�Դϴ�." << endl;
	}
	Location operator+(Location& loc) {
		Location location(x + loc.x, y + loc.y);
		return location;
	}
};

int main(void) {
	Location loc1(1, 2);
	Location loc2(3, 5);
	Location loc3 = loc1 + loc2;

	loc1.showLoc();
	loc2.showLoc();
	loc3.showLoc();
	return 0;
}
//0807OperOver.cpp