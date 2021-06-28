#include <iostream>
using namespace std;

class Location {
private:
	int x;
	int y;
public:
	Location(int x, int y)
		: x(x), y(y) {
	}
	void ShowData() const {
		cout << "좌표는 : " << x << ", " << y << "입니다." << endl;
	}
	Location &operator++() {
		this->x += 1;
		this->y += 1;
		return *this;
	}
	Location operator++(int) {
		Location ret(x, y);
		this->x += 1;
		this->y += 1;
		return ret;
	}
	friend Location &operator--(Location &loc);
	friend Location operator--(Location &loc, int);
};

Location &operator--(Location &loc) {
	loc.x -= 1;
	loc.y -= 1;
	return loc;
}

Location operator--(Location &loc, int) {
	Location ret(loc);
	loc.x -= 1;
	loc.y -= 1;
	return ret;
}

int main(void) {
	Location loc(1, 2);
	Location copyloc(0, 0);
	copyloc = loc++;
	copyloc.ShowData();
	loc.ShowData();

	copyloc = loc--;
	copyloc.ShowData();
	loc.ShowData();
	return 0;
}
//0808SingularOperOver2.cpp