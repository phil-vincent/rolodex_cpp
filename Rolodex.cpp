#include "stdafx.h"
#include "Rolodex.h"

Rolodex::Rolodex() {
	mCardIter = mCards.begin();
}

void Rolodex::add(Card& card) {
	//iterate through current list of Cards and insert new card into correct spot alphabetically
	std::list<Card>::iterator card_iter;
	for (card_iter = mCards.begin();
		card_iter != mCards.end();
		card_iter++)
	{
		//use overloaded Card comparison operator for alphabetical ordering
		if (*card_iter < card) {
			continue;
		}
		break;
		
	}
	mCardIter = mCards.insert(card_iter, card);

}
void Rolodex::remove() {
	mCardIter = mCards.erase(mCardIter);
	if (mCardIter == mCards.end()) {
		mCardIter = mCards.begin();
	}

}

Card Rolodex::getCurrentCard() {
	return *mCardIter;
}

Card Rolodex::flip() {
	mCardIter++;
	if (mCardIter == mCards.end()) {
		mCardIter = mCards.begin();
	}

	return *mCardIter;
}
bool Rolodex::search(const std::string& lastname, const std::string& firstname) {
	for (std::list<Card>::iterator card_iter = mCards.begin();
		card_iter != mCards.end();
		card_iter++)
	{
		if (lastname == card_iter->getLast() && firstname == card_iter->getFirst()) {
			mCardIter = card_iter;
			return true;
		}
	}
	return false;
}
void Rolodex::show(std::ostream& os) {
	for (std::list<Card>::iterator card_iter = mCards.begin();
		card_iter != mCards.end();
		card_iter++)
	{
		(*card_iter).show(os);
	}
}