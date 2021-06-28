#include "dragon.h"
#include <iostream>
using namespace std;

Dragon::Dragon()
	:Monster(10, 0, 15) {
	//실행문 없음
}

int Dragon::AttackWarrior(int atk) {
	setHp(getHp() - atk);
	cout << "드래곤은 " << atk << "의 피해를 입었다" << endl;
	return getAtk();
}
