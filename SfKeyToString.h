/*
 * sfKeyToString.h
 *
 *  Created on: 06.09.2011
 *      Author: Nehmulos
 */

#ifndef SFKEYTOSTRING_H_
#define SFKEYTOSTRING_H_

#include <map>
#include <string>
#include <sstream>
#include <SFML/Window.hpp>

static std::map<sf::Keyboard::Key, std::string> translation;

extern void initSfKeyToString();
extern std::string sfKeyToString(sf::Event::KeyEvent&);
extern std::string sfKeyToString(sf::Keyboard::Key&);
extern sf::Keyboard::Key sfKeyFromString(std::string);

#endif /* SFKEYTOSTRING_H_ */
