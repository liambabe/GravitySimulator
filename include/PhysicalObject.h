#ifndef PhysicalObject_H
#define PhysicalObject_H

#include <SFML/Graphics.hpp>
#include <string>

class PhysicalObject
{

public:
	//constructors
	PhysicalObject(sf::Shape* s); //give a class its shape
	PhysicalObject(std::string s, float radius); //let construct generate shape
	~PhysicalObject();


	//getters
	double getMass() const;
	double getVelocity() const;
	double getAcceleration() const;
	double getHeight() const;
	double getRadius() const;
	sf::Shape* getShape() const;

	//setters
	void setMass(double m);
	void setVelocity(double v);
	void setAcceleration(double a);
	void setHeight(double h);
	void setRadius(double r);

private:
	double mass;
	double velocity;
	double acceleration;
	double height;
	double radius;
	sf::Shape *shape;

};

#endif
