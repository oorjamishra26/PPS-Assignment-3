#include <iostream>  

using namespace std;

int main () 
{
  
    float a, b;
    cout << "Enter value of a ";
    cin >> a;
    
    cout << "Enter value of b ";
    cin >> b;
    
    cout << "Before swap a = " << a;
    cout << " b = " << b << endl;
  
    a = a * b;			
    b = a / b;			   
    a = a / b;			
    
    cout << "After swap a = " << a; 
    cout << " b = " << b << endl;
  
return 0;

}
