#include <iostream>
using namespace std;

class BananaSeller {
private:
	const int BANANA_PRICE;
	int banana;
	int money;
public:
	BananaSeller(int price, int b, int m) :BANANA_PRICE(price), banana(b), money(m) {}

	int SaleBanana(int m) {
		int num = m / BANANA_PRICE;
		banana -= num;
		money += m;
		return num;
	}
	void ShowSeller() {
		cout << "�ٳ��� ���: " << banana << endl;
		cout << "���� �����" << money << endl;
	}
};

class BananaBuyer {
private:
	int money;
	int banana;
public:
	BananaBuyer(int m) :money(m), banana(0) {}

	void BuyBanana(BananaSeller &seller, int m) {
		banana += seller.SaleBanana(m);
		money -= m;
	}
	void ShowBuyer() {
		cout << "������ �ٳ��� ����: " << banana << endl;
		cout << "���� ��:" << money << endl << endl;
	}
};


int main() {

	BananaSeller seller(1000, 30, 0);
	BananaBuyer buyer(10000);

	buyer.BuyBanana(seller, 4000);
	cout << "������ ����" << endl;
	seller.ShowSeller();
	cout << "�������� ����" << endl;
	buyer.ShowBuyer();


	return 0;
}