#include <iostream>

namespace Nexon {
	int Level = 1;
	void GetLevel(int lv) {
		std::cout << "���� ������ ������ : ";
		std::cout << lv << "�Դϴ�." << std::endl;
	}
}
namespace Ncsoft {
	int Level = 30;
	void GetLevel(int lv) {
		std::cout << "���� ������ ������ : ";
		std::cout << lv << "�Դϴ�." << std::endl;
	}
}

int main(void) {
	Nexon::GetLevel(Nexon::Level);
	Ncsoft::GetLevel(Ncsoft::Level);
	return 0;
}
//0716Namespace01.cpp