#pragma once

#include "stdafx.h"
#include <iomanip>
#include <strstream>
#include <string>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <ios>
#include <stdio.h>

using namespace std;

class Card {
public:
	Card(std::string first, std::string last, std::string address, std::string job, std::string phone);
	//~Card();
	friend bool operator< (Card& card1, Card& card2);
	std::string getFirst();
	std::string getLast();
	std::string getAddress();
	std::string getJob();
	std::string getPhone();

	void setFirst(std::string first);
	void setLast(std::string last);
	void setAddress(std::string address);
	void setJob(std::string job);
	void setPhone(std::string phone);

	void show(std::ostream& os);
private:
	std::string mFirst;
	std::string mLast;
	std::string mAddress;
	std::string mJob;
	std::string mPhone;
};