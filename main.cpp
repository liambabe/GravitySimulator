#include "Equations.h"
#include "PhysicalObject.h"
#include "DisplayWindow.h"
#include "Scene.h"
#include "SpaceScene.h"
#include "ObjectList.h"
#include <iostream>
using namespace std;

int main()
{

  SpaceScene s;
  DisplayWindow dw(s);
  dw.run();

  return 0;
}
