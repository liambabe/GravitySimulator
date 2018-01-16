#include "Equations.h"
#include "PhysicalObject.h"
#include "DisplayWindow.h"
#include "Scene.h"
#include "SpaceScene.h"
#include <iostream>
using namespace std;

int main()
{
	PhysicalObject human("circle", 50.f);
	human.setMass(60.0);

 	SpaceScene s;
 	s.addObject(&human);
	DisplayWindow dw(&s);
	dw.run();

	return 0;
}
