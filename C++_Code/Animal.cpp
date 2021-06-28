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
		cout << "������ ������ " << height << "�Դϴ�" << endl;
		cout << "������ ü���� " << weight << "�Դϴ�" << endl;
		cout << "������ ��ȿ�� " << food << "�Դϴ�" << endl;
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
		cout << "����̰� " << name << "�̶�� �ҷ��ִ�";
		cout << sound << "�Ҹ��� ���ϴ�" << endl;
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
		cout << "�������� " << skill << "�϶�� ��Ű�� ";
		cout << "�״��" << skill << "�մϴ�" << endl;
	}
};

int main() {

	Cat cat;
	cat.setHeight(20);
	cat.setWeight(5);
	cat.setFood("����� ���");
	cat.setSound("�߿� �߿�");
	cat.setName("�߿���");
	cat.ShowData();
	cat.meow();
	cout << endl;

	Dog dog;
	dog.setHeight(80);
	dog.setWeight(15);
	dog.setFood("������ ����");
	dog.setSkill("�� ��");
	dog.ShowData();
	dog.ShowSkill();

	return 0;
}