#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

class customer
{
	public:
		customer();
		~customer();
		void getLogin();
		void getProfileInfo(string &fName, string &sName, string &address);
		void getPaymentInfo();

	protected:
		string fName;
		string sName;
		string address;

};

// Constructor

customer::customer()
{
	fName = "";
	sName = "";
	address = "";

	// Initialises Variables 
}


// Destructor

customer::~customer()
{
}


// Customer Log In

void customer::getLogin()
{
	string username;
	string password;

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Log In~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
	cout << "\n Welcome to the Bucks Centre Performing Arts Ticket Purchasing System" << endl;
	cout << "Please Log In" << endl;

	cout << "Enter Username: ";
	getline(cin, username);

	while (username.length() > 10)
	{
		cout << "Your username cannot be more than 10 characters long." << endl;
		cout << "Please re-enter your username: ";
		getline(cin, username);
	}

	cout << "Enter Password: ";
	getline(cin, password);

	while (password.length() > 10)
	{
		cout << "Your password cannot be more than 10 characters long." << endl;
		cout << "Please re-enter your password: ";
		getline(cin, password);
	}


}


// Customer Profile Information

void customer::getProfileInfo(string &fName, string &sName, string &address)
{
	char ch, terminator;

	do
	{
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Personal Profile~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
		cout << "Please enter your details" << endl;


		// Customer Firstname

		cout << "Enter your Firstname: ";
		getline(cin, fName);

		while (fName.length() > 40)
		{
			cout << "Too many characters." << endl;
			cout << "Please re-enter your firstname: ";
			getline(cin, fName);
		}





		// Customer Surname

		cout << "Enter your Surname: ";
		getline(cin, sName);

		while (sName.length() > 40)
		{
			cout << "Too many characters." << endl;
			cout << "Please re-enter your surname: ";
			getline(cin, sName);
		}





		// Customer Address

		cout << "Enter your Address: ";
		getline(cin, address);

		while (address.length() > 60)
		{
			cout << "Too many characters." << endl;
			cout << "Please re-enter your address: ";
			getline(cin, address);
		}



		do
		{
			cout << "\nAre you happy with the details you have entered (Y = Yes, N = No)?: ";
			cin.get(ch);
		} while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
		cin.get(terminator); // Clears buffer

	} while (ch == 'N' || ch == 'n');

		

} 

// Customer Payment Details

void customer::getPaymentInfo()
{

	string bUsername;
	string bPassword;

	cout << "Please enter your bank username and password" << endl;

	cout << "Enter Bank Username: ";
	getline(cin, bUsername);

	while (bUsername.length() > 10)
	{
		cout << "Your bank username cannot be more than 10 characters long." << endl;
		cout << "Please re-enter your bank username: ";
		getline(cin, bUsername);
	}

	cout << "Enter Bank Password: ";
	getline(cin, bPassword);

	while (bPassword.length() > 10)
	{
		cout << "Your bank password cannot be more than 10 characters long." << endl;
		cout << "Please re-enter your bank password: ";
		getline(cin, bPassword);
	}
}

