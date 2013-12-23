#include "ItemToPurchase.h"

/**
 * @brief sets an Item object to ItemToPurchase object's item.
 * 
 * @ param it Item object which will be set to ItemToPurchase
 */
void ItemToPurchase::setItem(Item& it)
{
    item = &it;
}
