#include "Equations.cpp"
#include <iostream>
using namespace std;

int main()
{
  Equations mathEq;
  cout << "Force on earth: ";
  cout << mathEq.calcForce(EARTHRADIUS) << "\n";

  return 0;
}
