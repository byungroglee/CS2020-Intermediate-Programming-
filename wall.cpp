#include "wall.h"
#include <cstdlib>
#include <ctime>

using namespace std;

wall::wall(string playerName) : name(playerName), position(0) {}

string wall::getname() const {
	return name;
}

int wall::getposition() const {
	return position;
}

void wall::Climb() {
	int numClimbs = (rand() % 3) + 1;
	position += numClimbs;

	if (position > 20) {
		position = 20;
	}
}

void wall::Drop() {
	int numDrops = (rand() % 3) + 1;
	position -= numDrops;

	if (position < 0) {
		position = 0;
	}
}
