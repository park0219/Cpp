#include <iostream>
#include "Warrior.h"
#include "Seller.h"
#include "Orc.h"
#include "Job.h"
using namespace std;

Job::Job() {
	level = 1;
	hp = 20;
	items = 0;
	gold = 0;
	exp = 0;
	atk = 3;
	def = 1;
}

void Job::AttackMonster(Monster &monster) {
	cout << "����� ���� �����մϴ�." << endl;
	int dmg = monster.AttackPlayer(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "����� " << result << "��ŭ�� �������� �Ծ���" << endl;
}


void Job::sellItems(Seller &seller) {
	cout << "�������� " << items << "�� �Ⱦҽ��ϴ�." << endl;
	seller.BuyItem(items);
	gold += items * 100;
	items = 0;
	seller.ShowItems();
}

void Job::showPlayer() {
	cout << "���� ������ ������ " << level << "�Դϴ�." << endl;
	cout << "���� ������ ü���� " << hp << "�Դϴ�." << endl;
	cout << "���� ���� ������ ������" << items << "�� �Դϴ�." << endl;
	cout << "���� ���� �ݾ��� " << gold << "��� �Դϴ�." << endl;
	cout << "������� ����ġ�� " << exp << "�� ȹ���߽��ϴ�." << endl;
}

