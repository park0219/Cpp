#ifndef __MONSTER_H__
#define __MONSTER_H__

class Monster {
private:
	int atk;
	int def;
	int hp;
public:
	Monster(int atk, int def, int hp);
	virtual int AttackPlayer(int atk);
	void setHp(int hp);
	int getHp();
	void setAtk(int atk);
	int getAtk();
	void setDef(int def);
	int getDef();
};
#endif