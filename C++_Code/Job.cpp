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
	cout << "당신은 몬스터 공격합니다." << endl;
	int dmg = monster.AttackPlayer(atk);
	int result = (dmg - def);
	hp -= result;
	cout << "당신은 " << result << "만큼의 데미지를 입었다" << endl;
}


void Job::sellItems(Seller &seller) {
	cout << "아이템을 " << items << "개 팔았습니다." << endl;
	seller.BuyItem(items);
	gold += items * 100;
	items = 0;
	seller.ShowItems();
}

void Job::showPlayer() {
	cout << "현재 유저의 레벨은 " << level << "입니다." << endl;
	cout << "현재 유저의 체력은 " << hp << "입니다." << endl;
	cout << "현재 소유 아이템 갯수는" << items << "개 입니다." << endl;
	cout << "현재 소유 금액은 " << gold << "골드 입니다." << endl;
	cout << "현재까지 경험치는 " << exp << "를 획득했습니다." << endl;
}

