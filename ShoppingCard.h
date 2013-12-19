#ifndef SHOPPINGCARD_H_INCLUDED
#define SHOPPINGCARD_H_INCLUDED

#include "ItemToPurchase.h"
#include "Payment.h"
#include <vector>
#include <algorithm>

/** 
* @file ShoppingCard.h 
* @brief Shopping Card class
*
*        This header file will contain all required definitions and 
*        basic functions related with Shopping Card Class.
*
* @author Erman YESİL 
*
* @date 19/12/2013
*/
class ShoppingCard {
    Payment* payment;

protected:
    vector <ItemToPurchase> itemsToPurchase;

public:
    
    // setter functions
    void setPayment(Payment& pay) {payment = &pay;}

    // getter functions
    Payment* getPayment() {return payment;}

	/**
	 * @brief adds ItemToPurchase objects to the shopping card of customer
	 * @param itpurchase ItemToPurchase object which includes Item object 
	 *        and its quantity.
	 */
    void addItemToCard(ItemToPurchase& itpurchase);

	/**
	 * @brief removes ItemToPurchase objects from the shopping card of customer
	 *        via item id.     
	 * @param itemid id of item which will be removed from card as
	 */
    void removeItemFromCard(int itemid);

	/**
	 * @brief print items and their quantities at the shopping card
	 */ 
    void printItems();

	/**
	 * @brief Place order at the shopping card. This function also displays
	 *        customer's current account limit and amount of payment
	 */
    void placeOrder();

	/**
	 * @brief Cancel order at the shopping card. All ItemToPurchase objects will
	 *        be deleted from the card.
	 */
    void cancelOrder();

	/**
	 * @brief Calculates amount of payment by multiplying item's price by its
	 *        quantity at the shopping card
	 * 
	 * @return amount of payment as double
	 */
    double calculateTotalPrice();

};

#endif SHOPPINGCARD_H_INCLUDED
