#include <iostream>
using namespace std;

class Location {
private:
	int x;
	int y;
public:
	Location(int x = 0, int y = 0)
		: x(x), y(y) {
	}
	void ShowData() const {
		cout << "좌표는: " << x << ", " << y << "입니다." << endl;
	}
	Location &operator++() {
		this->x += 1;
		this->y += 1;
		return *this;
	}
	friend Location &operator--(Location &loc);
};

Location &operator--(Location &loc) {
	loc.x -= 1;
	loc.y -= 1;
	return loc;
}

int main(void) {
	Location loc(10, 20);
	++loc;
	(++loc).ShowData();
	--loc;
	loc.ShowData();
	++loc; --loc;
	loc.ShowData();
	return 0;
}
//0808SingularOperOver1.cpp