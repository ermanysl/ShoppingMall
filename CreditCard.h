#include "Payment.h"

/** 
* @file CreditCard.h 
* @brief This header file will contain all required definitions and 
*        basic functions related with CreditCard class.
*
* @author Erman YESIL 
*
* @date 18/12/2013
*/
class CreditCard : public Payment {
    string number;
    string type;
    string exp_date;

public:

	/**
	 * @brief Constructor
	 */
    CreditCard(double, string, string, string);

    //setter functions
    void setCCNumber(string num) {number = num;}
    void setCCType(string t) {type = t;}
    void setCCExpDate(string edate) {exp_date = edate;}

    //getter functions
    string getCCNumber() { return number;}
    string getCCType() { return type;}
    string getExpDate() { return exp_date;}

	/**
	 * @brief Perform payment for the items at the shopping card
	 */
    void performPayment();
};
