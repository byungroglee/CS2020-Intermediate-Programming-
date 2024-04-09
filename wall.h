#ifndef WALL_H
#define WALL_H

#include <string>

using namespace std;

class wall {
public:
	wall(string playerName);
	int getposition() const;
	string getname() const;
	void Climb();
	void Drop();

private:
	int position;
	string name;
};

#endif // WALL_H
