#include "CreditCard.h"

/**
 * @brief Constructor
 *        derived From Payment Constructor
 * @param amount payment amount
 * @param cc_number credit card number with 16 digit
 * @param cc_type credit card type
 * @param cc_expdate credit card expiration date
 */
CreditCard::CreditCard(double amount, string cc_number, string cc_type, string cc_expdate) : Payment(amount) {
    number = cc_number;
    type = cc_type;
    exp_date = cc_expdate;
}

/**
 * @brief implementation of performPayment()
 *        decreases customer account limit by payment amount
 *        which is calculated according to items at shopping card.
 */
void CreditCard::performPayment() {
    double lim = getLimit();
    lim -= getAmount();
    setLimit(lim);
}
