#include "ShoppingCard.h"
#include <iostream>
using namespace std;

void ShoppingCard::addItemToCard(ItemToPurchase& itpurchase)
{
    itemsToPurchase.push_back(itpurchase);
}

void ShoppingCard::removeItemFromCard(int itemid)
{
    vector <ItemToPurchase>::iterator it_topurchase;

	for(it_topurchase = itemsToPurchase.begin(); it_topurchase != itemsToPurchase.end(); it_topurchase++)
	{
        if(((*it_topurchase).getItem())->getItemId() == itemid)
        {
            itemsToPurchase.erase(itemsToPurchase.begin() + distance(itemsToPurchase.begin(),it_topurchase));
            break;
        }
	}	
}

void ShoppingCard::printItems()
{
    vector <ItemToPurchase>::iterator it_topurchase;

	for(it_topurchase = itemsToPurchase.begin(); it_topurchase != itemsToPurchase.end(); it_topurchase++)
	{
        cout << (*it_topurchase).getQuantity() << " pieces of " << ((*it_topurchase).getItem())->getItemName() 
             << "(Item id : " << ((*it_topurchase).getItem())->getItemId() << ")" << endl;
	}	
}

double ShoppingCard::calculateTotalPrice()
{
    double totalprice = 0;
    vector <ItemToPurchase>::iterator it_topurchase;

	for(it_topurchase = itemsToPurchase.begin(); it_topurchase != itemsToPurchase.end(); it_topurchase++)
	{
        totalprice += (*it_topurchase).getQuantity() * ((*it_topurchase).getItem())->getItemPrice();
	}

    return totalprice;
}

void ShoppingCard::placeOrder() {

    
}

void ShoppingCard::cancelOrder() {
    itemsToPurchase.erase(itemsToPurchase.begin(), itemsToPurchase.end());
}

