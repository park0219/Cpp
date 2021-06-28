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
	cout << "����� ��ũ�� �����մϴ�." << endl;
	int dmg = orc.AttackWarrior(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "����� " << result << "��ŭ�� �������� �Ծ���" << endl;
}

void Warrior::AttackTroll(Troll &troll) {
	cout << "����� Ʈ���� �����մϴ�." << endl;
	int dmg = troll.AttackWarrior(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "����� " << result << "��ŭ�� �������� �Ծ���" << endl;
}

void Warrior::AttackDragon(Dragon &d) {
	cout << "����� �巡���� �����մϴ�." << endl;
	int dmg = d.AttackWarrior(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "����� " << result << "��ŭ�� �������� �Ծ���" << endl;
}

void Warrior::showData() {
	cout << "���� : " << level << endl;
	cout << "ü�� : " << hp << endl;
	cout << "������ : " << item << endl;
	cout << "�� : " << money << endl;
	cout << "����ġ : " << exp << endl;
	cout << "=======================" << endl;
}

void Warrior::sellItems(Seller &seller) {
	cout << "�������� " << item << "�� �Ⱦҽ��ϴ�." << endl;
	seller.BuyItem(item);
	money += item * 100;
	item = 0;
	seller.ShowItems();
}