#include "Equations.cpp"
#include "PhysicalObject.cpp"
#include <iostream>
using namespace std;

int main()
{
  Equations mathEq;
  cout << "Acceleration on earth surface: ";
  cout << mathEq.calcAcceleration(EARTHRADIUS) << "\n";

  for (int i = 50; i < 501; i+=50) {
    double finalVelo = mathEq.calcFinalVelocity(0, i);
    cout << "Height: " << i << "m, ";
    cout << "Final velocity from fall: ";
    cout << finalVelo << "ms^-1";
    cout << ", Time: " << mathEq.calcTime(0, finalVelo, i) << "s";
    cout << ", Force: " << mathEq.calcDownForce(60, mathEq.calcAcceleration(EARTHRADIUS)) << "N\n";
  }

  return 0;
}
