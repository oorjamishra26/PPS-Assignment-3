#include <iostream>
#include <cmath>

using namespace std;

int
main ()
{
  float x;
  float a;			/* a is the expression x^2 + 2x^3*(2*x) */

  cout << "Enter the value of x ";
  cin >> x;

  a = pow (x, 2) + 2 * pow (x, 3) * (2 * x);

  cout << "The value of expression x^2 + 2x^3*(2*x) is " << a;

  return 0;
}
