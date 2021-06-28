#include <iostream>
#include "Warrior.h"
#include "Troll.h"
#include "orc.h"
#include "dragon.h"
using namespace std;

void Warrior::InitMembers() {
	level = 1;
	hp = 20;
	item = 0;
	money = 0;
	exp = 0;
	atk = 3;
	def = 1;
}

void Warrior::AttackOrc(Orc &orc) {
	cout << "당신은 오크를 공격합니다." << endl;
	int dmg = orc.AttackWarrior(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "당신은 " << result << "만큼의 데미지를 입었다" << endl;
}

void Warrior::AttackTroll(Troll &troll) {
	cout << "당신은 트롤을 공격합니다." << endl;
	int dmg = troll.AttackWarrior(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "당신은 " << result << "만큼의 데미지를 입었다" << endl;
}

void Warrior::AttackDragon(Dragon &d) {
	cout << "당신은 드래곤을 공격합니다." << endl;
	int dmg = d.AttackWarrior(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "당신은 " << result << "만큼의 데미지를 입었다" << endl;
}

void Warrior::showData() {
	cout << "레벨 : " << level << endl;
	cout << "체력 : " << hp << endl;
	cout << "아이템 : " << item << endl;
	cout << "돈 : " << money << endl;
	cout << "경험치 : " << exp << endl;
	cout << "=======================" << endl;
}

void Warrior::sellItems(Seller &seller) {
	cout << "아이템을 " << item << "개 팔았습니다." << endl;
	seller.BuyItem(item);
	money += item * 100;
	item = 0;
	seller.ShowItems();
}