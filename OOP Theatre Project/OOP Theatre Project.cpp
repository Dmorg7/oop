#include "stdafx.h"

//#include "pch.h"
#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"


int main()
{
	// Variables

	string a, b, c, f, g, h;

	int d;
	double e;
	char ch, terminator;


	// Objects

	showSeat SEAT;
	customer CUST;
	show SHOW;
	ticket * TICK;


	// Customer Info

	CUST.getLogin();
	CUST.getProfileInfo(f, g, h);



	// Main Menu Display (Customer Choice)

	system("CLS"); // Clears the buffer

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << " 1. Buy Show Tickets" << endl;
	cout << " 2. Log Out\n" << endl;
	cout << "Please enter a menu choice number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2')
	{
		cin.clear();
		cin.ignore(100, '\n');

		// Ensure the buffer is clear

		cout << "Please select a valid menu choice: ";
		cin.get(ch);
	}

	if (ch == '2')
	{
		return EXIT_SUCCESS;
	}

	// Show Selection

	do
	{
		SHOW.selectShow(a, b);
		c = SHOW.selectTime();

		do
		{
			cout << "\nAre you happy with your choice (Y = Yes, N = No)?: ";
			cin.get(ch);

		} while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');

		cin.get(terminator); // Clears buffer

	} 
	while (ch == 'N' || ch == 'n');



	// Seat Selection & Price Calculations

	SEAT.initialiseFloorPlan();
	d = SEAT.getNumSeats();
	e = SEAT.getSeatSelection();




}



