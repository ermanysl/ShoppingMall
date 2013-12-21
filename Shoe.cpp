#include "Shoe.h"
#include <iostream>

/**
 * @brief Constructor
 *        derived from Item class
 * @param it_name name of item as string
 * @param it_price price of item as double
 * @param shoe_number shoe size as int
 * @param shoe_gender gender as string
 */
Shoe::Shoe(string it_name, double it_price, int shoe_number, string shoe_gender) : Item(it_name, it_price) {
    number = shoe_number;
    gender = shoe_gender;
}

/**
 * @brief Displays properties of a Shoe item
 */
void Shoe::printProperties() {
	cout << "Shoe name : " << getItemName() << endl;
    cout << "Shoe price : " << getItemPrice() << " TL" << endl;
    cout << "Shoe size : " << getShoeNumber() << endl;
    cout << "Shoe gender : " << getShoeGender() << endl;
}
