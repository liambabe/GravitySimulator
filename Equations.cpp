#include "Equations.h"
#include <cmath>

using namespace std;


double Equations::calcAcceleration() { //GM/R^2
	return 0.0;
}

double Equations::calcForce(double radius) { //GM1M2/R^2
		return (GRAVITIONALCONSTANT*EARTHMASS)/(pow(radius,2));
}
