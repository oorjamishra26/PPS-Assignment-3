#include <iostream>

using namespace std;

int main ()
{
  float dis_m, dis_km;		/* dis_m is distance in meters & dis_km is distance in kilometers */

  cout << "Enter distance in meters : ";
  cin >> dis_m;

  dis_km = dis_m / 1000;	/* Conversion in meters to kilometers */

  cout << "The given Distance in kilometers is " << dis_km;

  return 0;
}
