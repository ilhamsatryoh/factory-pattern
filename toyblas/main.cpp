#include "board.h"
#include "rocket.h"
#include "tnt.h"
#include "tiles.h";
#include "tilefactory.h"
#include <iostream>;
using namespace std;

int main() {
	board a;
	a.getTiles(1, 1)->explode();
	a.getTiles(2, 2)->explode();
}