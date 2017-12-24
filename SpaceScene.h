#ifndef SpaceScene_H
#define SpaceScene_H

#include "Scene.h"

class SpaceScene : public Scene
{

public:
	void addStar(PhysicalObject o);
	PhysicalObject getStar();

private:
	PhysicalObject* star;

};

#endif