#include "Map.h"



Map::Map(string startingLocationName)
{
	currentLocation = new Location(startingLocationName);
	Path.push(currentLocation);
	Destination.push(currentLocation);
}


Map::~Map()
{
}
