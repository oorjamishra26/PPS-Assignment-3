#include <iostream>
using namespace std;

intmain ()
{
  float salary, DA, HRA, grossSal;	  /** Declaring variables : salary, dearness allowance, 
                                          house rent allowance & gross Salary**/
  cout << "Please enter your salary ";
  cin >> salary;

  DA = salary * 3 / 20;		/* Determining Dearness Allowance */

  cout << "Your Dearness Allowance is " << DA << endl;

  HRA = salary / 20;		/* Determining House Rent Allowance */

  cout << "Your House Rent Allowance is " << HRA << endl;

  grossSal = salary + DA + HRA;	/* Determining Gross Salary */

  cout << "Your Gross Salary is " << grossSal << endl;

  return 0;
}
