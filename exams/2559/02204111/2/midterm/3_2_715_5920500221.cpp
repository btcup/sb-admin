//5920500221 Supasin Rujiapnich
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  float x,y,z;
  
  
  
  
  
 
  cout<<"Enter electricity cost per unit (bahts) : " ;
  cin>>x;
  
  
  
  cout<<"Enter last unit :";
  cin>>y;
  
  
  
  cout<<"Enter current unit :";
  cin>>z;
  
  cout<<"Units used = "<<(z-y)<<endl ;
  
  cout<<"Electricity charge (bahts) = "<<(z-y)*x<<endl ;
 
  
  cout<<"Total of Electricity charge (bahts) ="<<endl;
  
system ("pause");
return 0;
}
