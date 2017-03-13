#include <iostream>
#include <string>
#include "Map.h"
using namespace std;

void GoNorth(Map &map);

int main()
{
	Map map = Map("Home");

	int choice = -1;

	while (choice != 0)
	{
		cout << "Choose an option" << endl;
		cout << "0) Exit" << endl;
		cout << "1) Get current location info" << endl;
		cout << "2) Go north" << endl;
		cin >> choice;
	}

	switch (choice)
	{
		case 0:
			break;
		case 1:
			cout << map._currentLocation->GetLocationInfo() << endl;;
		default:
			cout << "please enter a valid option" << endl;
	}
	


	system("pause");
	return 0;
}

void GoNorth(Map & map)
{
	Location newLocation = Location("North of Home");
	map._currentLocation = &newLocation;
}
