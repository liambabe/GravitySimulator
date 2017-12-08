#ifndef Scene_H
#define Scene_H

#include "PhysicalObject.h"

class Scene
{

public:
	void addObject(PhysicalObject o); //TODO array

	PhysicalObject getObjects(); //TODO array

private:
	PhysicalObject objects; //TODO convert to array

};

#endif
