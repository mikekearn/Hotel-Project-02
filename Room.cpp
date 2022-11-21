#include "Room.h"

using namespace std;

void genericRoom::bookRoom()
{
	roomsBooked++;
}

int genericRoom::showRoomCount()
{
	return roomsBooked;
}

// Each room type has nearly identical bookRoom() functions, with only the specific references and text changing relevant to the type.
void courtyardRoom::bookRoom()
{
	// if...else function to give correct grammar depending on room count,
	// as well as giving error if room type is fully booked.
	// Handled automatically based on hardcoded room type limit and current room count.
	if ((genericRoom::courtyardRoomAmount - showRoomCount()) >= 3)
	{
		cout << endl;
		cout << "     You've booked a Courtyard Room!\n";
		addRoomCount();
		cout << "     There are " << genericRoom::courtyardRoomAmount - showRoomCount() << " Courtyard Rooms left.";
		cout << endl;
	}
	else if ((genericRoom::courtyardRoomAmount - showRoomCount()) == 2)
	{
		cout << endl;
		cout << "     You've booked a Courtyard Room!\n";
		addRoomCount();
		cout << "     There is " << genericRoom::courtyardRoomAmount - showRoomCount() << " Courtyard Room left.";
		cout << endl;
	}
	else if ((genericRoom::courtyardRoomAmount - showRoomCount()) == 1)
	{
		cout << endl;
		cout << "     You've booked a Courtyard Room!\n";
		addRoomCount();
		cout << "     There are no Courtyard Rooms left.";
		cout << endl;
	}
	else if ((genericRoom::courtyardRoomAmount - showRoomCount()) == 0)
	{
		cout << endl;
		cout << "     Invalid selection.\n";
		cout << "     There are no Courtyard Rooms left.";
		cout << endl;
	}
}

// As above, each room type has these same functions, which are just accessors and counters.
void courtyardRoom::addRoomCount()
{
	roomsBooked++;
}

int courtyardRoom::showRoomCount()
{
	return roomsBooked;
}

double courtyardRoom::showRoomPrice()
{
	return price;
}

void scenicRoom::bookRoom()
{
	if ((genericRoom::scenicRoomAmount - showRoomCount()) >= 3)
	{
		cout << endl;
		cout << "     You've booked a Scenic Room!\n";
		addRoomCount();
		cout << "     There are " << genericRoom::scenicRoomAmount - showRoomCount() << " Scenic Rooms left.";
		cout << endl;
	}
	else if ((genericRoom::scenicRoomAmount - showRoomCount()) == 2)
	{
		cout << endl;
		cout << "     You've booked a Scenic Room!\n";
		addRoomCount();
		cout << "     There is " << genericRoom::scenicRoomAmount - showRoomCount() << " Scenic Room left.";
		cout << endl;
	}
	else if ((genericRoom::scenicRoomAmount - showRoomCount()) == 1)
	{
		cout << endl;
		cout << "     You've booked a Scenic Room!\n";
		addRoomCount();
		cout << "     There are no Scenic Rooms left.";
		cout << endl;
	}
	else if ((genericRoom::scenicRoomAmount - showRoomCount()) == 0)
	{
		cout << endl;
		cout << "     Invalid selection.\n";
		cout << "     There are no Scenic Rooms left.";
		cout << endl;
	}
}

void scenicRoom::addRoomCount()
{
	roomsBooked++;
}

int scenicRoom::showRoomCount()
{
	return roomsBooked;
}

double scenicRoom::showRoomPrice()
{
	return price;
}

void deluxeRoom::bookRoom()
{
	if ((genericRoom::deluxeRoomAmount - showRoomCount()) >= 3)
	{
		cout << endl;
		cout << "     You've booked a Deluxe Suite!\n";
		addRoomCount();
		cout << "     There are " << genericRoom::deluxeRoomAmount - showRoomCount() << " Deluxe Suites left.";
		cout << endl;
	}
	else if ((genericRoom::deluxeRoomAmount - showRoomCount()) == 2)
	{
		cout << endl;
		cout << "     You've booked a Deluxe Suite!\n";
		addRoomCount();
		cout << "     There is " << genericRoom::deluxeRoomAmount - showRoomCount() << " Deluxe Suite left.";
		cout << endl;
	}
	else if ((genericRoom::deluxeRoomAmount - showRoomCount()) == 1)
	{
		cout << endl;
		cout << "     You've booked a Deluxe Suite!\n";
		addRoomCount();
		cout << "     There are no Deluxe Suites left.";
		cout << endl;
	}
	else if ((genericRoom::deluxeRoomAmount - showRoomCount()) == 0)
	{
		cout << endl;
		cout << "     Invalid selection.\n";
		cout << "     There are no Deluxe Suites left.";
		cout << endl;
	}
}

void deluxeRoom::addRoomCount()
{
	roomsBooked++;
}

int deluxeRoom::showRoomCount()
{
	return roomsBooked;
}

double deluxeRoom::showRoomPrice()
{
	return price;
}

void penthouseRoom::bookRoom()
{
	if ((genericRoom::penthouseRoomAmount - showRoomCount()) >= 3)
	{
		// Currently this option should never come into play because there are only 2 Penthouse Suites hardcoded into the program.
		// I'm including it anyway to standardize the room options and allow for future changes to room amounts to be easily handled.
		cout << endl;
		cout << "     You've booked a Penthouse Suite!\n";
		addRoomCount();
		cout << "     There are " << genericRoom::penthouseRoomAmount - showRoomCount() << " Penthouse Suites left.";
		cout << endl;
	}
	else if ((genericRoom::penthouseRoomAmount - showRoomCount()) == 2)
	{
		cout << endl;
		cout << "     You've booked a Penthouse Suite!\n";
		addRoomCount();
		cout << "     There is " << genericRoom::penthouseRoomAmount - showRoomCount() << " Penthouse Suite left.";
		cout << endl;
	}
	else if ((genericRoom::penthouseRoomAmount - showRoomCount()) == 1)
	{
		cout << endl;
		cout << "     You've booked a Penthouse Suite!\n";
		addRoomCount();
		cout << "     There are " << genericRoom::penthouseRoomAmount - showRoomCount() << " Penthouse Suites left.";
		cout << endl;
	}
	else if ((genericRoom::penthouseRoomAmount - showRoomCount()) == 0)
	{
		cout << endl;
		cout << "     Invalid selection.\n";
		cout << "     There are no Penthouse Suites left.";
		cout << endl;
	}
}

void penthouseRoom::addRoomCount()
{
	roomsBooked++;
}

int penthouseRoom::showRoomCount()
{
	return roomsBooked;
}

double penthouseRoom::showRoomPrice()
{
	return price;
}
