#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class showSeat
{
	protected:
		char floorPlan[7][6];
		int numSeat;
		int rNum;
		double price;

	public:
		showSeat();
		~showSeat();

		void initialiseFloorPlan();
		int getNumSeats();
		double getSeatSelection();

	private:
		void displayFloorPlan(int r, int c);
		void calculatePrice(double price);
};

// Theatre Seats

showSeat::showSeat()
{
	for (int r = 0; r <= 7; r++)
	{
		for (int c = 0; c <= 6; c++)
		{
			floorPlan[r][c] = 0;
		}
	}

	numSeat = 0;
	rNum = 0;
	price = 0;

}


// Destructor

showSeat::~showSeat()
{
}


// Initilalise floor plan

void showSeat::initialiseFloorPlan()
{
	for (int r = 0; r <= 7; r++)
	{
		for (int c = 0; c <= 6; c++)
		{
			floorPlan[r][c] = 'A';
		}
	}
}


// Get Seat Number

int showSeat::getNumSeats()
{
	system("CLS"); // Clears the buffer

	do
	{
		cout << "Please enter the amout of seats required: ";
		cin >> numSeat;

	} while (numSeat <= 1 && numSeat >= 8);

	return numSeat;

}


// Get Seat(s)

double showSeat::getSeatSelection()
{
	char ch, terminator;
	int r, c;
	r = 0;
	c = 0;

	void displayFloorPlan(int r, int c);

	do
	{
		for (int i = 0; i <= numSeat; i++)
		{
			do
			{
				cout << "Please select a row: ";
				cin.get(ch);
				ch = r;

			} while (ch < 7);

			r = rNum;

			do
			{
				cout << "Please select a column: ";
				cin.get(ch);
				ch = c;

			} while (ch < 6);

		}

		do
		{
			cout << "\nAre you happy with the details you have entered (Y = Yes, N = No)?: ";
			cin.get(ch);

		} while (ch != 'Y' || ch != 'y');
		

		if (ch == 'N' || ch == 'n')
		{
			initialiseFloorPlan();
			cout << "Please re-select your seat";
			price = 0; // reinitialise price variable
		}

	} while (ch == 'Y' && ch == 'y');

	return price;

	cin.get(terminator); // Clears buffer

}


// Available theatre seats

void showSeat::displayFloorPlan(int r, int c)
{
	char ch;

	while ('H' != floorPlan[r][c])
	{
		cout << "This seat is unavailable, please choose an available seat ";

		do
		{
			cout << "Please re-select a row: ";
			cin.get(ch);
			ch = r;

		} while (ch < 7);

		r = rNum;

		do
		{
			cout << "Please re-select a column: ";
			cin.get(ch);
			ch = c;

		} while (ch < 6);

	}

	void calculatePrice(double price);

	floorPlan[r][c] = 'H';

	cout << "1 2 3 4 5 6 7";

	for (int r = 0; r < 7; r++)
	{
		(r + 1);

		for (int c = 0; c < 6; c++)
		{
			floorPlan[r][c];
		}
	}



}


// Ticket Price Calculation

void showSeat::calculatePrice(double price)
{
	if (rNum >= 1 && rNum <= 4)
	{
		price = price + 20;
	}

	if (rNum >= 5 && rNum <= 7)
	{
		price = price + 30;
	}
}