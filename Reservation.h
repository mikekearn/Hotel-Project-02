#ifndef Reservation_h
#define Reservation_h

#include "Room.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// Current idea is using this class for all functions regarding reservations, accumulations,
// daily totals, etc.
class reservations
{
private:
	// Instantiate each room type for various functions specific to each type used in booking and totalling rooms.
	courtyardRoom makeCourtyards;
	scenicRoom makeScenics;
	deluxeRoom makeDeluxes;
	penthouseRoom makePenthouses;
	genericRoom ogRoom;
public:
	// Various menu displays and the total function at the end.
	// (I didn't use the getTotal function name but it does what is requested in the assignment.)
	void displayHeader();
	void mainMenu(string filename);
	void reserveRoomMenu(string filename);
	void displayRoomOptions();
	void displayRoomSummary();
	double totalDailyGross();
	void printToFile(string filename, int roomNum);
};

#endif // !Reservation_h

