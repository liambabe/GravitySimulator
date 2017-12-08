#include "Scene.h"

using namespace std;

void Scene::addObject(PhysicalObject o ) {
	objects = o; //TODO convert to array form
}


PhysicalObject Scene::getObjects() {
	return objects; //TODO convert to array
}