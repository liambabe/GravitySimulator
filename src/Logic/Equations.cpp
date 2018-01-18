#include "Logic/Equations.h"
#include <cmath>

using namespace std;

const double GRAVITIONALCONSTANT = 6.67408e-11;
const double EARTHMASS = 5.972e+24; //kgs
const double EARTHRADIUS = 6371000.0; //m

double Equations::calcDownForce(double mass, double acceleration) {//f=ma
	return mass*acceleration;
}

double Equations::calcAcceleration(double radius) { //GM/R^2
	return (GRAVITIONALCONSTANT*EARTHMASS)/(pow(radius,2));
}

double Equations::calcFinalVelocity(double initialVelocity, double height) { //vf^2 = vi^2+2*a*h
	double finalHeight = EARTHRADIUS+height;
	return sqrt((pow(initialVelocity,2) + 2.0 * calcAcceleration(finalHeight) * height));
}

double Equations::calcTime(double initialVelocity, double finalVelocity, double time) { //vf = vi + at, t = (vf-vi)/a
	double acceleration = calcAcceleration(EARTHRADIUS);
	return (finalVelocity - initialVelocity)/acceleration;
}

double Equations::calcOrbitalRadius(double time, double mass) {//r^3 = (t^2*G*M)/(4*pi^2)
	return 0.0; //to make it compile
}

//object equations

double Equations::calcDownForce(PhysicalObject obj) {
	return obj.getMass()*obj.getAcceleration();
}

double Equations::calcAcceleration(PhysicalObject obj) {
	return (GRAVITIONALCONSTANT*EARTHMASS)/(pow(obj.getRadius(),2));
}
