#include "Item.h"

/** 
* @file Shoe.h 
* @brief this header file will contain all required 
* definitions and basic functions related with concrete Shoe class..
*
* @author Erman Yesil
*
* @date 17/12/2013
*/

class Shoe : public Item {

private:
	int number;
	string gender;

public:
	/**
	 * @brief Constructor
	 */
    Shoe(string it_name, double it_price, int number, string gender);

    //setter functions
    void setShoeNumber(int n) { number = n;}
    void setShoeGender(string s) { gender = s;}

    //getter functions
    int getShoeNumber() { return number;}
    string getShoeGender() { return gender;}

	/**
	 * @brief Display properties of Item
	 */
	void printProperties();

};
