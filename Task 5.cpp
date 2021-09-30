#include <iostream>

using namespace std;

int
main ()
{
  int rollno;
  float msub1, msub2, msub3, msub4, msub5, msum, score;	/* Defining all the variables */

  cout << "Please enter your Roll Number ";
  cin >> rollno;

  cout << "Enter the marks of 1st Subject ";
  cin >> msub1;

  cout << "Enter the marks of 2nd Subject ";
  cin >> msub2;

  cout << "Enter the marks of 3rd Subject ";
  cin >> msub3;

  cout << "Enter the marks of 4th Subject ";
  cin >> msub4;

  cout << "Enter the marks of 5th Subject ";
  cin >> msub5;

  msum = msub1 + msub2 + msub3 + msub4 + msub5;

  cout << "Total Marks Obtained by Roll No. " << rollno;   /* Sum of the marks of all the subjects*/
  cout << " is " << msum << endl;

  score = msum * 100 / 500;

  cout << "Total Score Obtained by Roll No. " << rollno;   /* Calculated Total Score*/
  cout << " is " << score << endl;

  return 0;
}
