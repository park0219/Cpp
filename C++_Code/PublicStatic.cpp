#include <iostream>
using namespace std;

class Team {
public:
	static int score;
public:
	void setScore(int score) {
		this->score = score;
	}
	void showScore() {
		cout << "���� ������ : " << score << endl;
	}
};
int Team::score = 0;

int main(void) {
	Team::score = 50;
	cout << "��ü ���� �� : " << Team::score << endl;
	Team t1;
	Team t2;
	Team t3;
	t1.setScore(100);
	t2.showScore();
	t3.showScore();
	return 0;
}