#include <iostream>
using namespace std;

class Sinivel {
public:
	void Take() {
		cout << "�๰ óġ��" << endl;
	}
};

class Sneeze {
public:
	void Take() {
		cout << "��ü�� óġ��" << endl;
	}
};

class Snuffle {
public:
	void Take() {
		cout << "�ڸ��� óġ��" << endl;
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