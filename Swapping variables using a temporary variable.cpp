#include <iostream>

using namespace std;

int
main ()
{

  float a, b, c;		/* a & b are the two variables and c is the temporary variable */

  cout << "Enter value of a ";
  cin >> a;

  cout << "Enter value of b ";
  cin >> b;

  cout << "Before swapping a = " << a;
  cout << " b = " << b << endl;

  c = a * b;			/* Swapping the variables using a temporary variable c */
  b = c / b;
  a = c / a;

  cout << "After swapping a = " << a;
  cout << " b = " << b << endl;

  return 0;

}
