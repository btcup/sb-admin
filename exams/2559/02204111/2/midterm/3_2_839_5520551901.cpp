// 5520551901 Sumeth Nareepapjaroen

#include <iostream>
using namespace std;
int main()
{
    double x,y,z;
    
    cout << "Enter electricity cost per unit (bahts) : ";
    cin >> x;
    cout << "Enter last unit:";
    cin >>y;
    cout << "Enter current unit:";
    cin >>z;
    
    do
    {
    if (z<y)
      cout << "Invalid current unit!";
      else
      {
          if (z>y)
         cout << "Units used = " << y-z <<endl;
      }
    }
    while()
    
    cout << 
    
    system ("pause");     
    return 0;   
}   
 
