#include "Payment.h"

/** 
* @file Check.h 
* @brief This header file will contain all required definitions and 
*        basic functions related with Check class.
*
* @author Erman YESIL 
*
* @date 18/12/2013
*/
class Check : public Payment {
    string name;
    int bankId;
public:

	/**
	 * @brief Constructor
	 */
    Check(double, string, int);
    // setter functions
    void setBankName(string n) {name = n;}
    void setBankId(int b) {bankId = b;}

    // getter functions
    string getBankName() { return name;}
    int getBankId() { return bankId;}

	/**
	 * @brief Perform payment for the items at the shopping card
	 */
    void performPayment();
};
