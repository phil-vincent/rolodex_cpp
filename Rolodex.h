#pragma once

#include <iomanip>
#include <strstream>
#include <string>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <list>
#include <algorithm>
#include "Card.h"
#include <ios>
#include <fstream>

class Rolodex {
public:
	Rolodex();
	void add(Card& card);
	void remove();
	Card getCurrentCard();
	Card flip();
	bool search(const std::string& lastname, const std::string& firstname);
	void show(std::ostream& os);
private:
	std::list <Card> mCards;
	std::list<Card>::iterator mCardIter;
};