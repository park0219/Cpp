#include <iostream>
using namespace std;

class BananaSeller {
private:
	int BANANA_PRICE;
	int numOfBanana;
	int money;

public:
	void InitMembers(int price, int num, int m) {
		BANANA_PRICE = price;
		numOfBanana = num;
		money = m;
	}
	int SaleBanana(int m) {
		int num = m / BANANA_PRICE;
		numOfBanana -= num;
		money += m;
		return num;
	}
	void ShowSalesResult() {
		cout << "�ٳ��� ���: " << numOfBanana << endl;
		cout << "�Ǹż���: " << money << endl << endl;
	}
};

class BananaBuyer {
	//���� �����ڸ� �����ϸ� �ڵ����� private ó��
	int money;
	int numOfBanana;
public:
	void InitMembers(int m) {
		money = m;
		numOfBanana = 0;
	}
	void BuyBanana(BananaSeller &seller, int m) {
		numOfBanana += seller.SaleBanana(m);
		money -= m;
	}
	void ShowBuyResult() {
		cout << "���� ��: " << money << endl;
		cout << "�ٳ��� ���� :" << numOfBanana << endl;
	}
};

int main() {

	BananaSeller seller1;
	seller1.InitMembers(1000, 20, 0);
	BananaSeller seller2;
	seller2.InitMembers(1000, 20, 0);
	BananaBuyer buyer;
	buyer.InitMembers(10000);
	buyer.BuyBanana(seller2, 3000);

	cout << "����1 ���� ����" << endl;
	seller1.ShowSalesResult();

	cout << "����2 ���� ����" << endl;
	seller2.ShowSalesResult();

	cout << "������ ���� ����" << endl;
	buyer.ShowBuyResult();

	return 0;
}