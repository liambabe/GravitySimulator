#ifndef Scene_H
#define Scene_H

#include "PhysicalObject.h"
#include "ObjectList.h"

class Scene
{

public:
	void addObject(PhysicalObject o); 

	ObjectList getObjects();


private:
	 ObjectList objects; 

};

#endif
