#include "Equations.h"
#include "PhysicalObject.h"
#include "DisplayWindow.h"
#include "Scene.h"
#include "SpaceScene.h"
#include <iostream>
using namespace std;

int main()
{
	PhysicalObject human("hi");
	human.setMass(60.0);

 	Scene s;
 	s.addObject(human);
	DisplayWindow dw(s);
	dw.run();

	return 0;
}
