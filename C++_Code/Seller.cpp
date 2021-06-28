#include <iostream>
using namespace std;
#include "Seller.h"

void Seller::init() {
	items = 0;
}
void Seller::BuyItem(int item) {
	items += item;
}
void Seller::ShowItems() {
	cout << "현재까지 상인이 구매한 아이템 갯수는 ";
	cout << items << "개 입니다." << endl << endl;
}