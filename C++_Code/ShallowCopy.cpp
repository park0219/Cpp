#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Computer {
	char *model;
	int ssd;
	int ram;
public:
	Computer(const char *modelname, int ssd, int ram) {
		int len = strlen(modelname) + 1;
		model = new char[len];
		strcpy(model, modelname);
		this->ssd = ssd;
		this->ram = ram;
	}
	void ShowComputer() {
		cout << "¸ðµ¨¸í:" << model << endl;
		cout << "ssd:" << ssd << "gb" << endl;
		cout << "ram:" << ram << "gb" << endl;
	}
	~Computer() {
		delete[ ] model;
		cout << "ÄÄÇ»ÅÍ °´Ã¼°¡ Æó±âµÇ¾ú½À´Ï´Ù." << endl;
	}
};
int main(void) {
	Computer c1("AMD", 500, 32);
	Computer c2 = c1;
	c1.ShowComputer();
	c2.ShowComputer();

	return 0;
}