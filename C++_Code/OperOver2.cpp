#include <iostream>
using namespace std;

class Location {
private:
	int x;
	int y;
public:
	Location(int x = 0, int y = 0)
		:x(x), y(y) {
	}
	void ShowData() const {
		cout << "좌표는 : " << x << ", " << y << "입니다." << endl;
	}
	friend Location operator+(Location &loc1, Location &loc2);
};
Location operator+(Location &loc1, Location &loc2) {
	Location loc(loc1.x + loc2.x, loc1.y + loc2.y);
	return loc;
}

int main(void) {
	Location loc1(5, 6);
	Location loc2(1, 2);
	Location loc3 = loc1 + loc2;

	loc1.ShowData();
	loc2.ShowData();
	loc3.ShowData();
	return 0;
}
//0808OperOver2.cpp