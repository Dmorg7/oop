#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show
{
	public:
		show();
		~show();
		
		void selectShow(string &showName, string &showDate);
		string selectTime();

	protected:
		string showName;
		string showDate;
		string showTime;

};

// Constructor

show::show()
{
	showName = "";
	showDate = "";
	showTime = "";
}

// Destructor 

show::~show()
{
}

// Theatre Screenings

void show::selectShow(string &showName, string &showDate)
{
	char ch, terminator;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Shows~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "1. Lion King (20/05/2019)" << endl;
	cout << "2. Les Misarables (21/05/2019)" << endl;
	cout << "3. The Pantom of the Opera (22/05/2019)" << endl;

	cin.clear();
	cin.ignore(100, '\n'); // Buffer is clear

	cout << "Please select a show number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid show number: ";
		cin.get(ch);
	}

	switch (ch)
	{
		case '1': showName = "Lion King", showDate = "20/05/2019";
		case '2': showName = "Les Miserables", showDate = "21/05/2019";
		case '3': showName = "The Pantom of the Opera", showDate = "22/05/2019";
	}

	// Enters the reference variable into the class variable

	this->showName = showName;
	this->showDate = showDate;

	cin.get(terminator); // Clears the buffer

}

// Customer Showtime choice

string show::selectTime()
{
	char ch, terminator;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Show Times~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "1. 13:00" << endl;
	cout << "2. 19:00" << endl;

	cout << "Please select a show time: ";
	cin.get(ch);


	while (ch != '1' && ch != '2')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a valid show time: ";
		cin.get(ch);
	}

	switch (ch)
	{
		case '1': showTime = "13:00";
		case '2': showTime = "19:00";
	}

	// Enters the reference variable into the class variable

	this->showTime = showTime;

	cin.get(terminator); // Clears the buffer

	return showTime;
}