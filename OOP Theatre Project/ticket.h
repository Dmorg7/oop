#pragma once

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

class ticket
{
public:
	ticket();
	~ticket();

	void selectShow(string &showName, string &showDate);
	string selectTime();

protected:
	string showName;
	string showDate;
	string showTime;

};

// Constructor

ticket::ticket()
{
	showName = "";
	showDate = "";
	showTime = "";
}

// Destructor 

ticket::~ticket()
{
}


