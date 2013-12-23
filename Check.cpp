#include "Check.h"

/**
 * @brief Constructor
 *        derived from Payment Constructor
 * @param amount amount of payment as double
 * @param c_name name of bank as string
 * @param c_bankid id of bank as integer
 */
Check::Check(double amount, string c_name, int c_bankid) : Payment(amount) {
    name = c_name;
    bankId = c_bankid;
}

/**
 * @brief implementation of performPayment()
 *        decreases customer account limit by payment amount
 *        which is calculated according to items at shopping card.
 */
void Check::performPayment() {
    double lim = getLimit();
    lim -= getAmount();
    setLimit(lim);
}

