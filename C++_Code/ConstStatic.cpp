#include <iostream>
using namespace std;

class CpuPrice {
public:
	const static int AMD = 700;
	const static int INTEL = 800;
	const static int DELL = 500;
};

int main() {

	cout << "AMD ����: " << CpuPrice::AMD << endl;
	cout << "INTEL ����: " << CpuPrice::INTEL << endl;
	cout << "DELL ����: " << CpuPrice::DELL << endl;

	return 0;
}