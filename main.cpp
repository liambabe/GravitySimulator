#include "Logic/Equations.h"
#include "Entities/PhysicalObject.h"
#include "GUI/DisplayWindow.h"
#include "GUI/Scenes/Scene.h"
#include "GUI/Scenes/SpaceScene.h"
#include "GUI/ImageMap.h"
#include <iostream>
using namespace std;

int main()
{
	PhysicalObject human("circle", 50.f);
	human.setMass(60.0);

	ImageMap im;

 	SpaceScene s;
 	s.addObject(&human);
	DisplayWindow dw(&s, im);
	dw.run();

	return 0;
}
