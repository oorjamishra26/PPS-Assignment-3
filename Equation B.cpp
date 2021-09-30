#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   float x;
   float y;
   float z;
   float a;      /* a is the value of expression  x^1 + y^2 + z^3*/
   
   cout<< "Enter the value of x ";
   cin>> x;
   
   cout<< "Enter the value of y ";
   cin>> y;
   
   cout<< "Enter the value of z ";
   cin>> z;
   
   a = x + pow(y, 2) + pow(z, 3);
   
   cout<< "The value of your expression x + y^2 + z^3 is " << a;

    return 0;
}
