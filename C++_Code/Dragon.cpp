#include "dragon.h"
#include <iostream>
using namespace std;

Dragon::Dragon()
	:Monster(10, 0, 15) {
	//���๮ ����
}

int Dragon::AttackWarrior(int atk) {
	setHp(getHp() - atk);
	cout << "�巡���� " << atk << "�� ���ظ� �Ծ���" << endl;
	return getAtk();
}
