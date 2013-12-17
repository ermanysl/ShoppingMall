#include "Item.h"

/** 
* @file Book.h 
* @brief this header file will contain all required 
* definitions and basic functions related with concrete Book class.
*
* @author Erman Yesil
*
* @date 17/12/2013
*/

class Book : public Item {

private:
	string author;
	string publisher;

public:
	/**
	 * @brief Constructor
	 */
    Book(string it_name, double it_price, string author, string publisher);

    //setter functions
    void setBookAuthor(string a) { author = a;}
    void setBookPublisher(string p) { publisher = p;}

    //getter functions
    string getBookAuthor() { return author;}
    string getBookPublisher() { return publisher;}

	/**
	 * @brief Display properties of Item
	 */
	void printProperties();
};
