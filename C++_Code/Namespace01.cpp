#include <iostream>

namespace Nexon {
	int Level = 1;
	void GetLevel(int lv) {
		std::cout << "현재 유저의 레벨은 : ";
		std::cout << lv << "입니다." << std::endl;
	}
}
namespace Ncsoft {
	int Level = 30;
	void GetLevel(int lv) {
		std::cout << "현재 몬스터의 레벨은 : ";
		std::cout << lv << "입니다." << std::endl;
	}
}

int main(void) {
	Nexon::GetLevel(Nexon::Level);
	Ncsoft::GetLevel(Ncsoft::Level);
	return 0;
}
//0716Namespace01.cpp