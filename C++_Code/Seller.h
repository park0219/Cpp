#ifndef __SELLER_H__
#define __SELLER_H__

class Seller {
private:
	int items;
public:
	void init();
	void BuyItem(int item);
	void ShowItems();
};
#endif
