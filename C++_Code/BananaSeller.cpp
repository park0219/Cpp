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
		cout << "바나나 재고: " << numOfBanana << endl;
		cout << "판매수익: " << money << endl << endl;
	}
};

class BananaBuyer {
	//접근 재한자를 생략하면 자동으로 private 처리
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
		cout << "남은 돈: " << money << endl;
		cout << "바나나 개수 :" << numOfBanana << endl;
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

	cout << "상인1 관련 정보" << endl;
	seller1.ShowSalesResult();

	cout << "상인2 관련 정보" << endl;
	seller2.ShowSalesResult();

	cout << "구매자 관련 정보" << endl;
	buyer.ShowBuyResult();

	return 0;
}