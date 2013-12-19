#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED

#include "Customer.h"
#include "Item.h"
#include <string>
#include <vector>

using namespace std;

/** 
* @file Store.h 
* @brief Abstract Store Class
*        this header file will contain all required definitions and 
*        basic functions related with abstract Store class.
*
* @author Erman YESIL
*
* @date 19/12/2013
*/

class Store {
	string name;
	static int id;
    int store_id;
protected:
	vector <Customer*> customers;
	vector <Item*> items;

public:
	/**
	 * @brief Constructor
	 * 
	 * @param s_name name of the store as string
	 *
	 * unique store_id of store will be incremented 
	 * automatically with every creation of Store object.
	 * 
	 */
    Store(string s_name) { name = s_name; store_id = id++;}

	/**
	 * @brief A customer enters to store
	 * 
	 * @param c Customer object
	 */
	void enter(Customer& c);

	/**
	 * @brief A customer exits the store
	 * 
	 * @param c Customer object
	 */
	void exit(Customer& c);

	/**
	 * @brief Display customers in the store
	 */
	void printCustomers();


	//setter functions
	void setStoreName(string s_name) {name = s_name;}

	//getter fuctions
	string getStoreName() { return name;}
	int getStoreId() { return store_id;}
    vector <Customer*> getCustomers() { return customers;}

	//overloading equality operator
	Store& operator= (const Store& s);

	virtual void printItems() = 0;

	/**
	 * @brief Adds an item object to store
	 * 
	 * @ param it Item object
	 */
    void addItemtoStore(Item& it);

	/**
	 * @brief Finds and item via its ID through the store
	 * 
	 * @param id ID of item which will be found.
	 * @param it Target item will be stored at @it.
	 *           it is constructed as reference to pointer to an Item object.
	 * @return true if store has an item with this id
	 *         false if store has not this item.
	 */
    bool getItemviaId(int id, Item*& it);

	/**
	 * @brief Finds a customer via its name through the store
	 * 
	 * @param c_name name of customer which will be found.
	 * @param c Target customer will be stored at @c.
	 *          c is constructed as reference to pointer to a Customer object.
	 * @return true if store has a customer with @c_name
	 *         false if store has not this customer.
	 */
    bool getCustomerFromStore(string c_name, Customer*& c);
};

#endif // STORE_H_INCLUDED
