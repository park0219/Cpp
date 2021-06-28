#include <iostream>
#include "Warrior.h"
#include "seller.h"
#include "Troll.h"
#include "Magician.h"
using namespace std;


int main(void) {
	Warrior w1;
	Magician m1;
	Seller s1;
	Troll t1;
	Orc o1;
	Dragon d1;
	s1.init();
	w1.AttackMonster(t1);
	w1.AttackMonster(o1);
	w1.AttackMonster(d1);
	w1.showPlayer();
	w1.sellItems(s1);
	w1.showPlayer();
	cout << endl;
	m1.AttackMonster(t1);
	m1.AttackMonster(o1);
	m1.AttackMonster(d1);
	m1.showPlayer();
	m1.sellItems(s1);
	m1.showPlayer();
	system("pause");
	return 0;
}
