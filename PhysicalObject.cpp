#include "PhysicalObject.h"

//constructor

PhysicalObject::PhysicalObject(sf::Shape* s) {
	shape = s;
}

PhysicalObject::PhysicalObject(std::string s, float radius) {

	if (s == "circle") {
		shape = new sf::CircleShape(radius);
		shape->setFillColor(sf::Color::Green);
	}
}

PhysicalObject::~PhysicalObject() {
	delete shape;
}

//getter functions
double PhysicalObject::getMass() const {
	return mass;
}

double PhysicalObject::getVelocity() const {
	return velocity;
}

double PhysicalObject::getAcceleration() const {
	return acceleration;
}

double PhysicalObject::getHeight() const { 
	return height;
}

double PhysicalObject::getRadius() const {
	return radius;
}

sf::Shape* PhysicalObject::getShape() const {
	return shape;
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

void PhysicalObject::setRadius(double r) {
	radius = r;
}
