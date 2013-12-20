#ifndef MALL_H_INCLUDED
#define MALL_H_INCLUDED

#include "Customer.h" 
#include "Store.h"
#include <vector>

using namespace std;

/** 
* @file Mall.h 
* @brief this header file will contain all required definitions and
*        basic functions related with Mall class.
*
* @author Erman YESIL
*
* @date 20/12/2013
*/

class Mall {
	string name;
	vector <Store*> stores;
	vector <Customer*> customers;

public:
	/**
	 * @brief Customer enters to mall
	 *
	 * @param c Customer object
	 */
	void enter(Customer& c);

	/**
	 * @brief Customer exits the mall
	 *
	 * @param c Customer object
	 */
	void exit(Customer& c);

	/**
	 * @brief returns the customers which are currently at the mall
	 * 
	 * @return vector of pointer to customer objects
	 */
	vector <Customer*> getCustomers();

	/**
	 * @brief Displays the customers which are currently in the mall
	 */
	void printCustomers();

	/**
	 * @brief Displays the stores at the mall
	 */
	void printStores();

	/**
	 * @brief gets stores at the mall
	 *
	 * @return vector of pointers to store objects
	 */
	vector <Store*> getStores();

	void setMallName(string name);
	
	string getMallName() {return name;}

	/**
	 * @brief add store to the mall
	 * 
	 * @param Store object
	 */
	void addStore(Store &s);

	/**
	 * @brief Finds a store and holds it via its store id
	 * 
	 * @param id id of the store as integer
	 * @param s reference to pointer to a Store object
	 *          if store can be found it will be recorded to s
	 *
	 * @return false if store can not be found
	 *         true if store can be found
	 */
	bool getStoreviaId(int id, Store*& s);
	
	/**
	 * @brief Find a customer via customer name
	 *        Customers at the mall will be searched via customer name
	 * @param c_name customer name as string
	 * @param c reference to pointer to Customer object to hold searched customer object.
	 *
	 * @return false if store can not be found
	 *         true if store can be found
	 */
	bool getCustomerFromMall(string c_name, Customer*& c);
};

#endif // MALL_H_INCLUDED
