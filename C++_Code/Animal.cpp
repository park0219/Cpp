#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Animal {
private:
	int height;
	int weight;
	char food[100];
public:
	void setHeight(int height) {
		this->height = height;
	}
	void setWeight(int weight) {
		this->weight = weight;
	}
	void setFood(const char *food) {
		strcpy(this->food, food);
	}
	void ShowData() {
		cout << "동물의 신장은 " << height << "입니다" << endl;
		cout << "동물의 체중은 " << weight << "입니다" << endl;
		cout << "동물의 사효은 " << food << "입니다" << endl;
	}
};

class Cat : public Animal {
private:
	char name[100];
	char sound[100];
public:
	void setName(const char *name) {
		strcpy(this->name, name);
	}
	void setSound(const char *sound) {
		strcpy(this->sound, sound);
	}
	void meow() {
		cout << "고양이가 " << name << "이라고 불러주니";
		cout << sound << "소리를 냅니다" << endl;
	}
};

class Dog : public Animal {
private:
	char skill[100];
public:
	void setSkill(const char *skill) {
		strcpy(this->skill, skill);
	}
	void ShowSkill() {
		cout << "강아지가 " << skill << "하라고 시키니 ";
		cout << "그대로" << skill << "합니다" << endl;
	}
};

int main() {

	Cat cat;
	cat.setHeight(20);
	cat.setWeight(5);
	cat.setFood("고양이 사료");
	cat.setSound("야옹 야옹");
	cat.setName("야옹이");
	cat.ShowData();
	cat.meow();
	cout << endl;

	Dog dog;
	dog.setHeight(80);
	dog.setWeight(15);
	dog.setFood("강아지 간식");
	dog.setSkill("손 줘");
	dog.ShowData();
	dog.ShowSkill();

	return 0;
}