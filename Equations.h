extern const double GRAVITIONALCONSTANT = 6.67408e-11;
extern const double EARTHMASS = 5.972e+24; //kgs
extern const double EARTHRADIUS = 6371000.0; //m

class Equations
{
  public:
    //kinematic motion equations
    double calcAcceleration(double radius);
    double calcDownForce(double mass, double acceleration);
    double calcFinalVelocity(double initialVelocity, double height);
    double calcTime(double initialVelocity, double finalVelocity, double time);
    //orbitital equations
    double calcOrbitalRadius(double time, double mass);
};
