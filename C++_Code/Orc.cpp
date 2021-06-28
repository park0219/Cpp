#include "orc.h"
#include <iostream>
using namespace std;

Orc::Orc()
	:Monster(2, 0, 5) {
	//실행문 없음
}

int Orc::AttackWarrior(int atk) {
	setHp(getHp() - atk);
	cout << "오크는 " << atk << "의 피해를 입었다" << endl;
	return getAtk();
}
