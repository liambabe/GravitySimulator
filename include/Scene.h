#ifndef Scene_H
#define Scene_H

#include "PhysicalObject.h"
#include <vector>

class Scene
{

public:
	void addObject(PhysicalObject* o); 

	std::vector<PhysicalObject *> getObjects();


private:
	 std::vector<PhysicalObject *> objects; 

};

#endif
