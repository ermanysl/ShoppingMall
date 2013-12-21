#include "Book.h"
#include <iostream>

/**
 * @brief Constructor
 *        derived from Item class
 * @param it_name name of item as string
 * @param it_price price of item as double
 * @param b_author author of the book as string
 * @param b_publisher publisher of the book as string
 */
Book::Book(string it_name, double it_price, string b_author, string b_publisher) : Item(it_name, it_price) {
    author = b_author;
    publisher = b_publisher;
}

/**
 * @brief Displays properties of a Book item
 */
void Book::printProperties() {
	cout << "Book name : " << getItemName() << endl;
    cout << "Book price : " << getItemPrice() << " TL" << endl;
    cout << "Book author : " << getBookAuthor() << endl;
    cout << "Book Publisher : " << getBookPublisher() << endl;
}
