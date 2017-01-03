#include "stdafx.h"
#include "Card.h"

Card::Card(std::string first, std::string last, std::string address, std::string job, std::string phone) {
	setFirst(first);
	setLast(last);
	setAddress(address);
	setJob(job);
	setPhone(phone);
}

bool operator< (Card& card1, Card& card2) {
	if (card1.getLast() < card2.getLast()) {
		return true;
	}
	if (card1.getLast() == card2.getLast()) {
		if (card1.getFirst() < card2.getFirst()) {
			return true;
		}
	}
	return false;
}

std::string Card::getFirst() {
	return mFirst;
}
std::string Card::getLast() {
	return mLast;
}
std::string Card::getAddress() {
	return mAddress;
}
std::string Card::getJob() {
	return mJob;
}
std::string Card::getPhone() {
	return mPhone;
}

void Card::setFirst(std::string first) {
	mFirst = first;
}

void Card::setLast(std::string last) {
	mLast = last;
}
void Card::setAddress(std::string address) {
	mAddress = address;
}
void Card::setJob(std::string job) {
	mJob = job;
}
void Card::setPhone(std::string phone) {
	mPhone = phone;
}

void Card::show(std::ostream & os) {
	std::string sp = " ";
	os << mFirst << sp << mLast << sp << mAddress << sp << mJob << sp << mPhone << std::endl;
}