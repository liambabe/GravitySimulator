#ifndef Equations_H
#define Equations_H

#include "Entities/PhysicalObject.h"

extern const double GRAVITIONALCONSTANT;
extern const double EARTHMASS;
extern const double EARTHRADIUS;

class Equations
{
  public:
    //kinematic motion equations
    double calcAcceleration(double radius);
    double calcAcceleration(PhysicalObject obj);
    double calcDownForce(double mass, double acceleration);
    double calcDownForce(PhysicalObject obj);
    double calcFinalVelocity(double initialVelocity, double height);
    double calcTime(double initialVelocity, double finalVelocity, double time);
    //orbitital equations
    double calcOrbitalRadius(double time, double mass);
};

#endif
