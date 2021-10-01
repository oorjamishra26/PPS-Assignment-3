#include <iostream>  

using namespace std;

int main () 
{
  
    float a, b;                          /* a & b are the two variables*/
    cout << "Enter value of a ";
    cin >> a;
    
    cout << "Enter value of b ";
    cin >> b;
    
    cout << "Before swap a = " << a;
    cout << " b = " << b << endl;
  
    a = a * b;			                  /*Swapping Variables withou using a temporary variable*/
    b = a / b;			   
    a = a / b;			
    
    cout << "After swap a = " << a; 
    cout << " b = " << b << endl;
  
return 0;

}
