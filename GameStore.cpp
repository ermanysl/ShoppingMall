#include "GameStore.h"
#include <iostream>
#include <algorithm>
using namespace std;

/**
 * @brief display items in the store
 *        implementation of pure virtual function at base class Store
 */
void GameStore::printItems() {

	vector <Item*>::iterator it_item;

	for(it_item = items.begin(); it_item != items.end(); it_item++)
	{
		cout << "ID : " << (**it_item).getItemId() << "-" << (**it_item).getItemName() << endl; 
	}
}
