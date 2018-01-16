#include "Scene.h"

void Scene::addObject(PhysicalObject* o) {
	objects.push_back(o);
}

std::vector<PhysicalObject *> Scene::getObjects() {
	return objects; 
}
