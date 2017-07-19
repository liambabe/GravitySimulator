extern const double GRAVITIONALCONSTANT = 6.67408e-11;
extern const double EARTHMASS = 5.972e+24;
extern const double EARTHRADIUS = 6371000.0;

class Equations
{
  public:
    double calcAcceleration();
    double calcForce(double radius);
};
