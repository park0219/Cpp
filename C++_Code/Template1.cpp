#include <iostream>
using namespace std;

template <class T>
T Add(T a, T b) {
	return a + b;
}
int main(void) {
	cout << Add<int>(3, 5) << endl;
	cout << Add<double>(3.14, 3.14) << endl;
	cout << Add<int>(3.14, 3.14) << endl;
	cout << Add<double>(4, 5) << endl;
	return 0;
}
//0808Template1.cpp