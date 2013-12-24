#include <iostream>
#include "Store.h"
#include <algorithm>
/*
Store::Store(string s_name, int s_id)
{
	name = s_name;
	id = s_id;
}*/

int Store::id = 0;

void Store::enter(Customer& c)
{
    (&c)->setCStoreId(this->getStoreId());
	customers.push_back(&c);	
}

void Store::exit(Customer& c) {
	
	vector <Customer*>::iterator it_customer;

	for(it_customer = customers.begin(); it_customer != customers.end(); it_customer++)
	{
        if((**it_customer).getCustomerName() == c.getCustomerName())
		{
			customers.erase(customers.begin() + distance(customers.begin(),it_customer));
            break;
		}
	}
}

/*void Store::printItems() {
	throw "Not yet implemented";
}*/

void Store::printCustomers()
{
	vector <Customer*>::iterator it_customer;

    if(customers.size() == 0)
    {
        cout << "There are no customers at the " << this->getStoreName() <<  " right now! Please add customer!" << endl;
        return;
    }

	for(it_customer = customers.begin(); it_customer != customers.end(); it_customer++)
	{
		cout << distance(customers.begin(),it_customer)+1 << ". " << (**it_customer).getCustomerName() << endl; 
	}
}

void Store::addItemtoStore(Item& it)
{
    items.push_back(&it);
}

bool Store::getItemviaId(int id, Item*& it)
{
	vector <Item*>::iterator it_item;

	for(it_item = items.begin(); it_item != items.end(); it_item++)
	{
		if((**it_item).getItemId() == id)
		{
			//customers.erase(customers.begin() + distance(stores.begin(), it_store));
			it = *it_item;
			return true;
		}
	}

	return false;
}

bool Store::getCustomerFromStore(string c_name, Customer*& c)
{
	vector <Customer*>::iterator it_customer;

	for(it_customer = customers.begin(); it_customer != customers.end(); it_customer++)
	{
		if((**it_customer).getCustomerName() == c_name)
		{
			//customers.erase(customers.begin() + distance(customers.begin(),it_customer));
			c = *it_customer;
            return true;
		}
	}
    return false;
}

Store& Store::operator=(const Store& s)
{
	name = s.name;
	id = s.id;

	return *this;
}
