#include "ShoeStore.h"
#include <iostream>
using namespace std;

/**
 * @brief display items in the store
 *        implementation of pure virtual function at base class Store
 */
void ShoeStore::printItems() {

	vector <Item*>::iterator it_item;

	for(it_item = items.begin(); it_item != items.end(); it_item++)
	{
		cout << "ID : " << (**it_item).getItemId() << "-" << (**it_item).getItemName() << endl;  
	}
}

