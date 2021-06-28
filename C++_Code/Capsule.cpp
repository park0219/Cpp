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

class Medicine {
private:
	Sinivel sinivel;
	Sneeze sneeze;
	Snuffle snuffle;
public:
	void Take() {
		sinivel.Take();
		sneeze.Take();
		snuffle.Take();
	}
};

class Patient {
public:
	void TakeMedicine(Medicine &medicine) {
		medicine.Take();
	}
};

int main() {

	Medicine madicine;
	Patient patient;
	patient.TakeMedicine(madicine);

	return 0;
}