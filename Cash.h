#include "Payment.h"

/** 
* @file Cash.h 
* @brief This header file will contain all required definitions and 
*        basic functions related with abstract Cash Class
*
* @author Erman YESIL
*
* @date 18/12/2013
*/

class Cash : public Payment {

public:
	/**
	 * @brief Constructor
	 *		  Constructor of Cash is same as Payment Class
	 */
    Cash(double amount) : Payment(amount) {};
    void performPayment();

};
