#include "Scene.h"

void Scene::addObject(PhysicalObject o ) {
	objects.add(o);
}

ObjectList Scene::getObjects() {
	return objects; 
}