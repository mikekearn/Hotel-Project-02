#ifndef Room_h
#define Room_h

#include <string>
#include <iostream>

using namespace std;

// Testing out some options with base classes, inheritence, and derived classes
class genericRoom
{
protected:
	// Declare some variables to use
	int roomsBooked = 0;

	// *** May not continue this methodology. ***
	// Transfering each room variable from main to here
	// ** Moved to public access for const variables **

public:
	// Const starting count of rooms
	const int courtyardRoomAmount = 70;
	const int scenicRoomAmount = 35;
	const int deluxeRoomAmount = 15;
	const int penthouseRoomAmount = 2;

	// Const double of room rate (using double in case of maths later)
	const double courtyardRoomPrice = 125.0;
	const double scenicRoomPrice = 145.0;
	const double deluxeRoomPrice = 350.0;
	const double penthouseRoomPrice = 1135.0;

	const int totalRooms = 122;

	void bookRoom();
	
	// More count functions removed

	int showRoomCount();
	
	// A lot of functions removed/changed
	// Each room type subclass should handle things better now
};

// Each room type has own descendent class from genericRoom
// All are identitcal except for referencing correct price.
// I decided to keep prices together in genericRoom parent class for ease of changing and tracking if needed later.
class courtyardRoom: public genericRoom
{
private:
	double price = genericRoom::courtyardRoomPrice;
	int roomsBooked = 0;

public:
	void bookRoom();
	void addRoomCount();
	int showRoomCount();
	double showRoomPrice();
};

class scenicRoom : public genericRoom
{
private:
	double price = genericRoom::scenicRoomPrice;
	int roomsBooked = 0;

public:
	void bookRoom();
	void addRoomCount();
	int showRoomCount();
	double showRoomPrice();
};

class deluxeRoom : public genericRoom
{
private:
	double price = genericRoom::deluxeRoomPrice;
	int roomsBooked = 0;

public:
	void bookRoom();
	void addRoomCount();
	int showRoomCount();
	double showRoomPrice();
};

class penthouseRoom : public genericRoom
{
private:
	double price = genericRoom::penthouseRoomPrice;
	int roomsBooked = 0;

public:
	void bookRoom();
	void addRoomCount();
	int showRoomCount();
	double showRoomPrice();
};


#endif // !Room_h

