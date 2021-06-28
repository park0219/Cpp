#include "Troll.h"
#include <iostream>
using namespace std;

Troll::Troll()
	:Monster(1, 0, 2) {
	//실행문 없음
}

int Troll::AttackWarrior(int atk) {
	setHp(getHp() - atk);
	cout << "트롤은 " << atk << "의 피해를 입었다" << endl;
	return getAtk();
}
