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
		cout << "     What would you like to do?\n";
		cout << "       1. Reserve a room.\n";
		cout << "       2. View current inventory and total daily revenue.\n";
		cout << "       3. Exit the program.\n";
		cout << endl;
		cout << "     Please choose an option (1-3): ";
		// Standardising language throughout program.
		// cout << "     Enter an option: ";
		cin >> userString;
		cin.clear();
		cin.ignore(1000, '\n');
		if (userString.length() > 1)
		{
			userChoice = 0;
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

		if (userChoice == 1)
		{
			oReservations.reserveRoomMenu();
		}
		else if (userChoice == 2)
		{
			oReservations.displayHeader();
			// oReservations.displayRoomOptions();
			// Moving these options entirely to room summary for slightly different formatting.
			oReservations.displayRoomSummary();
		}
		else if (userChoice == 3)
		{
			// Brief exit message before program quits.
			cout << endl;
			cout << "               Thanks for using\n";
			cout << "          Hotel Griffin Booking Software.\n";
			cout << "               Have a nice day.";
			cout << endl;
		}
		else
		{
			cout << endl;
			cout << "     That was not a valid input, please try again.";
			cout << endl;
		}

		cout << endl;
	}
	



	return 0;
}