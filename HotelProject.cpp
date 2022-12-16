#include <string>
#include <iostream>

#include "Room.h"
#include "Reservation.h"

using namespace std;

int main()
{
	// Before spinning off other classes, get basic framework in place.
	// Room quantities and prices moved to Reservation.h header.

	// User choice variables
	int userChoice = 0;
	string userString = "0";

	// Very basic UI to start
	// Inventory moved to Reservation options
	// Add in while loop to keep program running.

	reservations oReservations;

	while (userChoice != 3)
	{
		oReservations.displayHeader();
		cout << endl;
		// Will have to revamp main menu to require input of date first.
		cout << "     Please enter today's date to begin (MMDDYYYY): ";
		// cout << "     Enter an option: ";
		cin >> userString;
		cin.clear();
		cin.ignore(1000, '\n');
		if (userString == "- 1")
		{
			cout << "Thanks for using this program. Goodbye.";
			cout << endl;
			break;
		}
		else if (userString.length() != 8 )
		{
			cout << endl;
			cout << "     That was not a valid input, please try again.";
			cout << endl;
		}
		else
		{
			try
			{
				userChoice = stoi(userString);
			}
			catch (invalid_argument)
			{
				// Another try catch as in Reservation.cpp for the stoi function to work correctly. Testing various input methods in this program versus last one.
				// cout << "     That was not a valid input, please try again.";
				// The cout isn't necessary after testing; default behavior below will catch the error as 'else' option.
			}
		}

		// Some testing outputs
		cout << "\n     You entered: " << userString << endl;
		
		// Bulk of main menu removed to make space for date implementation.
	}
	



	return 0;
}