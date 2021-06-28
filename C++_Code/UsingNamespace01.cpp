#include <iostream>

namespace student {
	void Function(void) {
		std::cout << "Student¼Ò¼ÓÀÇ Function()" << std::endl;
	}
}

int main(void) {
	using student::Function;
	student::Function();
	Function();
	return 0;
}
//0717UsingNamespace01.cpp