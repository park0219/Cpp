/*
C++에서 사용하는 입력 법칙을 사용해서
섭씨 온도를 입력하면 화씨 온도로
바꿔주는 프로그램을 만들어보세요.
화씨->섭씨 변환 공식은
섭씨온도 = (화씨온도 - 32) / 1.8
*/
#include <iostream>
int main(void) {
	double temp;
	std::cout << "섭씨 온도를 적어주세요";
	std::cin >> temp;

	double comp = temp * 1.8 + 32;
	std::cout << "화씨 온도는 : " << comp << " 도 입니다." << std::endl;
	return 0;
}

