#include "Game.h"
#include <iostream>

/**
 * @brief Constructor
 *        derived from Item class
 * @param it_name name of item as string
 * @param it_price price of item as double
 * @param g_mediatype media type of game as string
 * @param g_gametype game type of game as string
 */
Game::Game(string it_name, double it_price, string g_mediatype, string g_gametype) : Item(it_name, it_price) {
    mediatype = g_mediatype;
    gametype = g_gametype;
}
/**
 * @brief Displays properties of a Game item
 */
void Game::printProperties() {
	cout << "Game name : " << getItemName() << endl;
    cout << "Game price : " << getItemPrice() << " TL" << endl;
    cout << "Media type : " << getMediaType() << endl;
    cout << "Game type : " << getGameType() << endl;
}
