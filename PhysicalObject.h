#ifndef PhysicalObject_H
#define PhysicalObject_H

class PhysicalObject
{

public:
	//getters
	double getMass();
	double getVelocity();
	double getAcceleration();
	double getHeight();
	double getRadius();

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

};

#endif
