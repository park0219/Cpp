#include "orc.h"
#include <iostream>
using namespace std;

Orc::Orc()
	:Monster(2, 0, 5) {
	//���๮ ����
}

int Orc::AttackWarrior(int atk) {
	setHp(getHp() - atk);
	cout << "��ũ�� " << atk << "�� ���ظ� �Ծ���" << endl;
	return getAtk();
}
