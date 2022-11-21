#include "Reservation.h"

using namespace std;

// Separating out the header for easier customizing and re-use when needed.
void reservations::displayHeader()
{
	cout << endl;
	cout << "            **********************************" << endl;
	cout << "            * HOTEL GRIFFIN BOOKING SOFTWARE *" << endl;
	cout << "            **********************************" << endl;
	cout << "	                 (v0.3.1)" << endl; // Trying to keep version number consistent with my commits.
	cout << endl;
}

void reservations::mainMenu()
{
	// Possible main menu revamp will go here.
}

void reservations::reserveRoomMenu()
{
	// Make some variables to use
	bool loopReservations = true;
	string userInput = "0";
	string bookAgain;
	
	/**
	courtyardRoom makeCourtyards;
	scenicRoom makeScenics;
	deluxeRoom makeDeluxes;
	penthouseRoom makePenthouses;
	**/

	// Reservations menu has own loop to allow multiple reservations in a row with simple y/n selection
	// Includes some error handling.
	while (loopReservations)
	{
		cout << endl;
		displayHeader();
		displayRoomOptions();
		cout << "     5. Return to previous menu.\n";
		cout << endl;
		cout << "     Please choose an option (1-5): ";
		cin >> userInput;
		cin.clear();
		cin.ignore(1000, '\n');
		// User input should only be a single digit, discard anything else
		if (userInput.length() > 1)
		{
			cout << endl;
			cout << "     Invalid selection, please try again.\n";
		}
		else
		{
			// try/catch for the stoi function to convert string input into usable int
			try
			{
				// Switch statement for different cases, either booking rooms or going back up in the menu
				switch (stoi(userInput))
				{
				case 1:
					// Each case 1-4 is basically the same; runs the function for each room object, and offers to book another room or not
					makeCourtyards.bookRoom();
					cout << endl;
					cout << "     Would you like to book another room? (y/n) ";
					cin >> bookAgain;
					cin.clear();
					cin.ignore(1000, '\n');
					if (bookAgain == "y" || bookAgain == "Y")
					{
						loopReservations = true;
						break;
					}
					else if (bookAgain == "n" || bookAgain == "N")
					{
						loopReservations = false;
						break;
					}
					else
					{
						cout << endl;
						cout << "     Invalid selection, please try again.\n";
						loopReservations = true;
						break;
					}
					break;
				case 2:
					makeScenics.bookRoom();
					cout << endl;
					cout << "     Would you like to book another room? (y/n) ";
					cin >> bookAgain;
					cin.clear();
					cin.ignore(1000, '\n');
					if (bookAgain == "y" || bookAgain == "Y")
					{
						loopReservations = true;
						break;
					}
					else if (bookAgain == "n" || bookAgain == "N")
					{
						loopReservations = false;
						break;
					}
					else
					{
						cout << endl;
						cout << "     Invalid selection, please try again.\n";
						loopReservations = true;
						break;
					}
					break;
				case 3:
					makeDeluxes.bookRoom();
					cout << endl;
					cout << "     Would you like to book another room? (y/n) ";
					cin >> bookAgain;
					cin.clear();
					cin.ignore(1000, '\n');
					if (bookAgain == "y" || bookAgain == "Y")
					{
						loopReservations = true;
						break;
					}
					else if (bookAgain == "n" || bookAgain == "N")
					{
						loopReservations = false;
						break;
					}
					else
					{
						cout << endl;
						cout << "     Invalid selection, please try again.\n";
						loopReservations = true;
						break;
					}
					break;
				case 4:
					makePenthouses.bookRoom();
					cout << endl;
					cout << "     Would you like to book another room? (y/n) ";
					cin >> bookAgain;
					cin.clear();
					cin.ignore(1000, '\n');
					if (bookAgain == "y" || bookAgain == "Y")
					{
						loopReservations = true;
						break;
					}
					else if (bookAgain == "n" || bookAgain == "N")
					{
						loopReservations = false;
						break;
					}
					else
					{
						cout << endl;
						cout << "     Invalid selection, please try again.\n";
						loopReservations = true;
						break;
					}
					break;
				case 5:
					loopReservations = false;
					break;
				default:
					cout << endl;
					cout << "     Invalid selection, please try again.\n";
					break;
				}
			}
			catch (invalid_argument  e)
			{
				cout << endl;
				cout << "     Invalid selection, please try again.\n";
				// Only for testing error output correctly.
				// cout << "     " << e.what();
			}
		}
	}
}

// Display function to show what rooms are still available to book, and current price.
// Numbers are dynamically generated based on current availabilitiy and hardcoded prices listed elsewhere.
void reservations::displayRoomOptions()
{
	cout << endl;
	cout << "     The following rooms are open:\n";
	cout << endl;
	cout << "     1. Standard rooms (Courtyard): " << ogRoom.courtyardRoomAmount-makeCourtyards.showRoomCount() << "\t(current price: $" << fixed << showpoint << setprecision(2) << makeCourtyards.showRoomPrice() << ")\n";
	cout << "     2. Standard rooms (Scenic): " << ogRoom.scenicRoomAmount - makeScenics.showRoomCount() << "   \t(current price: $" << fixed << showpoint << setprecision(2) << makeScenics.showRoomPrice() << ")\n";
	cout << "     3. Deluxe Suites: " << ogRoom.deluxeRoomAmount - makeDeluxes.showRoomCount() << "             \t(current price: $" << fixed << showpoint << setprecision(2) << makeDeluxes.showRoomPrice() << ")\n";
	cout << "     4. Penthouse Suites: " << ogRoom.penthouseRoomAmount - makePenthouses.showRoomCount() << "          \t(current price: $" << fixed << showpoint << setprecision(2) << makePenthouses.showRoomPrice() << ")\n";
}

// Similar to displayRoomOptions() function but modified it here for summary of rooms and total revenue generated for the day.
void reservations::displayRoomSummary()
{
	cout << endl;
	cout << "     There are " << ogRoom.totalRooms - makeCourtyards.showRoomCount() - makeScenics.showRoomCount() - makeDeluxes.showRoomCount() - makePenthouses.showRoomCount() << " rooms left.\n";
	cout << endl;
	cout << "     Standard rooms (Courtyard): " << ogRoom.courtyardRoomAmount - makeCourtyards.showRoomCount() << endl;
	cout << "     Standard rooms (Scenic): " << ogRoom.scenicRoomAmount - makeScenics.showRoomCount() << endl;
	cout << "     Deluxe Suites: " << ogRoom.deluxeRoomAmount - makeDeluxes.showRoomCount() << endl;
	cout << "     Penthouse Suites: " << ogRoom.penthouseRoomAmount - makePenthouses.showRoomCount() << endl;
	cout << endl;
	cout << "     The total revenue for the day so far is $" << fixed << showpoint << setprecision(2) << totalDailyGross() << endl;
	cout << endl;
}

// Simply a quick function to calculate daily gross
// Can be used as-is, or modified later if we want to calculate things like taxes and such, but would likely spin that off into separate function.
double reservations::totalDailyGross()
{
	double total;

	total = ((makeCourtyards.showRoomCount() * makeCourtyards.showRoomPrice()) + (makeScenics.showRoomCount() * makeScenics.showRoomPrice()) + (makeDeluxes.showRoomCount() * makeDeluxes.showRoomPrice()) + (makePenthouses.showRoomCount() * makePenthouses.showRoomPrice()) );

	return total;
}
