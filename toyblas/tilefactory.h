#pragma once
#include "tiles.h"
#include "rocket.h"
#include "tnt.h"
#include <iostream>
using namespace std;

class tilesFactory
{
public:
	tiles* createTiles(string type, int X, int Y);
};
tiles* tilesFactory::createTiles(string type, int X, int Y) {
	tiles* output;
	if (type == "T") {
		output = new tnt;
		output->setKoordinat(X, Y);
		return output;
	}
	else if (type == "R") {
		output = new rocket;
		output->setKoordinat(X, Y);
		return output;
	};

}