#ifndef ITEMTOPURCHASE_H_INCLUDED
#define ITEMTOPURCHASE_H_INCLUDED

#include "Item.h"

/** 
* @file ItemToPurchase.h 
* @brief Abstract Item class
*        this header file will contain all required definitions and
*        basic functions related with abstract Item class.
*
* @author Erman Yesil
*
* @date 17/12/2013
*/
class ItemToPurchase {
private:
    Item* item;
    int quantity;

public:

    //setter functions
    void setItem(Item& it);
    void setQuantity(int q) { quantity = q;}

    //getter functions
    Item* getItem() { return item;}
    int getQuantity() { return quantity;}
};

#endif //ITEMTOPURCHASE_H_INCLUDED
