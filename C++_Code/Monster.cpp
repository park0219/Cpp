#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster(int atk, int def, int hp) {
	this->atk = atk;
	this->def = def;
	this->hp = hp;
}
int Monster::AttackPlayer(int atk) {
	hp -= atk;
	cout << "���ʹ� " << atk << "�� ���ظ� �Ծ���" << endl;
	return this->atk;
}
void Monster::setHp(int hp) {
	this->hp = hp;
}
int Monster::getHp() {
	return hp;
}
void Monster::setAtk(int atk) {
	this->atk = atk;
}
int Monster::getAtk() {
	return atk;
}
void Monster::setDef(int def) {
	this->def = def;
}
int Monster::getDef() {
	return def;
}

