#ifndef OBJECTLIST_H
#define OBJECTLIST_H

#include "PhysicalObject.h"

extern const int OBJECTCOUNT;


class ObjectList
{

public:
	ObjectList();
	PhysicalObject get(int index);
	void add(PhysicalObject o);
	void remove(PhysicalObject o);
	void remove(int index);
	int findIndex(PhysicalObject o);
	bool contains(PhysicalObject o);

private:
	PhysicalObject array[];
	int addIndex;


};

#endif