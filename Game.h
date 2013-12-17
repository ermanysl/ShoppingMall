#include "Item.h"

/** 
* @file Game.h 
* @brief this header file will contain all required 
* definitions and basic functions related with concrete Game class.
*
* @author Erman Yesil
*
* @date 17/12/2013
*/

class Game : public Item {

private:
	string mediatype;
	string gametype;

public:
	/**
	 * @brief Constructor
	 */
    Game(string it_name, double it_price, string mediatype, string gametype);

    //setter functions
    void setMediaType(string m) { mediatype = m;}
    void setGameType(string g) { gametype = g;}

    //getter functions
    string getMediaType() { return mediatype;}
    string getGameType() { return gametype;}

	/**
	 * @brief Display properties of Item
	 */
	void printProperties();
};
