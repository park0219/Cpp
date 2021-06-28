#ifndef __JOB_H__
#define __JOB_H__

#include "Seller.h"
#include "Troll.h"
#include "Orc.h"

enum {
	TROLL_EXP = 30,
	ORC_EXP = 50,
	DRAGON_EXP = 100
};

class Job {
private:
	int level;
	int hp;
	int items;
	int gold;
	int exp;
	int atk;
	int def;

public:
	Job();
	void sellItems(Seller &seller);
	void AttackMonster(Monster &monster);
	void showPlayer();
};
#endif