#include "Store.h"

/** 
 * @file Store.h 
 * @brief this header file will contain all required 
 * definitions and basic functions related with concrete BookStore class.
 *
 * @author Erman YESIL
 *
 * @date 19/12/2013
 */

class BookStore : public Store {


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
    BookStore(string name) : Store(name){};

	/**
	 * @brief display items in the store
	 *
	 */
	void printItems();
};
