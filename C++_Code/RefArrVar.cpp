#include <iostream>
using namespace std;

int main(void) {
	int arr[3] = {1, 3, 5};
	int &ref0 = arr[0];
	int &ref1 = arr[1];
	int &ref2 = arr[2];

	cout << ref0 << endl;
	cout << ref1 << endl;
	cout << ref2 << endl;
	return 0;
}
//0718RefArrVar.cpp