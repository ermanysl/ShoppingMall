#ifndef PAYMENT_H_INCLUDED
#define PAYMENT_H_INCLUDED

#include <string>
using namespace std;

/** 
* @file Payment.h 
* @brief Abstract Payment Class
*
*        This header file will contain all required definitions and 
*        basic functions related with abstract Payment class.
*        There will be no .cpp file for Payment class since setter & getter
*        functions are implemented as inline functions at this header and the other
*        function of this class is a virtual function which will be implemented
*        at derived classes. So there is no need to include a .cpp file for Payment class
*
* @author Erman YESİL
*
* @date 18/12/2013
*/

class Payment {
    double amount;
    double limit;

public:
	/**
	 * @brief Constructor
	 * @param p_amount amount of payment as double
	 */
    Payment(double p_amount) {amount = p_amount;}

    //setter functions
    void setAmount(double a) { amount = a;}
    void setLimit(double s) {limit = s;}
    
    //getter functions
    double getAmount() { return amount;}
    double getLimit() { return limit;}

	/**
	 * @brief pure virtual function
	 *        will be implemented at derived classes
	 */
    virtual void performPayment () = 0;
};

#endif PAYMENT_H_INCLUDED
