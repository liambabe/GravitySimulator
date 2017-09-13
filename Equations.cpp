#include "Equations.h"
#include <cmath>

using namespace std;


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

}
