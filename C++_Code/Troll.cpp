#include "Troll.h"
#include <iostream>
using namespace std;

Troll::Troll()
	:Monster(1, 0, 2) {
	//���๮ ����
}

int Troll::AttackWarrior(int atk) {
	setHp(getHp() - atk);
	cout << "Ʈ���� " << atk << "�� ���ظ� �Ծ���" << endl;
	return getAtk();
}
