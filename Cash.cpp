#include "Cash.h"

/**
 * @brief implementation of performPayment()
 *        decreases customer account limit by payment amount
 *        which is calculated according to items at shopping card.
 */
void Cash::performPayment() {
    double lim = getLimit();
    lim -= getAmount();
    setLimit(lim);
}
