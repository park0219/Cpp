#include <iostream>
using namespace std;

class Sinivel {
public:
	void Take() {
		cout << "콧물 처치약" << endl;
	}
};

class Sneeze {
public:
	void Take() {
		cout << "재체기 처치약" << endl;
	}
};

class Snuffle {
public:
	void Take() {
		cout << "코막힘 처치약" << endl;
	}
};

class Patient {
public:
	void TakeSnivel(Sinivel &cap) {
		cap.Take();
	}
	void TakeSneeze(Sneeze &cap) {
		cap.Take();
	}
	void TakeSnuffle(Snuffle &cap) {
		cap.Take();
	}
};
int main() {

	Sinivel sinivel;
	Sneeze sneeze;
	Snuffle snuffle;

	Patient patient;
	patient.TakeSneeze(sneeze);
	patient.TakeSnivel(sinivel);
	patient.TakeSnuffle(snuffle);

	return 0;
}