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
	cout << "������� ������ ������ ������ ������ ";
	cout << items << "�� �Դϴ�." << endl << endl;
}