#include <iostream>

using namespace std;

int main()
{
    int EN;                                                           /* Let EN be Employee's Number*/
    string Enm;                                                      /* Let Enm be Employee's Name*/
    string Ead;                                                     /*Let Ead be Employee's Address*/
    long int EP;                                                   /* Let EP be Employee's Phone Number*/
    
   cout<<"Please enter Employee Number ";
   cin>>EN;
   
   cout<<"Please enter Employee Name ";
   getline(cin, Enm);
   
   cout<<"Please enter Employee Address ";
   getline(cin, Ead);
   
   cout<<"Please enter Employee Phone Number ";
   cin>>EP;
   
   cout<<"Employee Details: "<<endl;
   cout<<"Employee Name: " <<EN <<endl;
   cout<<"Employee Number: " <<Enm <<endl;
   cout<<"Employee Address: " <<Ead <<endl;
   cout<<"Employee Phone Number: " <<EP <<endl;
   
   return 0;
}
