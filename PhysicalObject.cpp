#include "PhysicalObject.h"

using namespace std;

//getter functions
double PhysicalObject::getMass() {
	return mass;
}

double PhysicalObject::getVelocity() {
	return velocity;
}

double PhysicalObject::getAcceleration() {
	return acceleration;
}

double PhysicalObject::getHeight() {
	return height;
}

//setter functions
void PhysicalObject::setMass(double m) {
	mass = m;
}

void PhysicalObject::setVelocity(double v) {
	velocity = v;
}

void PhysicalObject::setAcceleration(double a) {
	acceleration = a;
}

void PhysicalObject::setHeight(double h) {
	height = h;
}
