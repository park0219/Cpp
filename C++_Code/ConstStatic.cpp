#include <iostream>
using namespace std;

class CpuPrice {
public:
	const static int AMD = 700;
	const static int INTEL = 800;
	const static int DELL = 500;
};

int main() {

	cout << "AMD 가격: " << CpuPrice::AMD << endl;
	cout << "INTEL 가격: " << CpuPrice::INTEL << endl;
	cout << "DELL 가격: " << CpuPrice::DELL << endl;

	return 0;
}