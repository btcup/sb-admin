//5920501227 wannada pitiyakulchorn
#include <iostream>      
using namespace std;
int main ()
{
float x,y;
int a,b,z;

cout<< "Enter electricity cost per unit (baths) : ";
cin>>x;


do 
{
   cout<<endl<<"Enter last unit : ";
   cin>> a;
   if (a<0)
         cout<< "Invalid last unit" <<endl;
   else
   cout << "Enter current unit : ";
   cin>> b;
         if (b<0)
         cout<< "Invalid current" <<endl;
         else
   {z=b-a;
   cout<< "unit used = " << z<<endl;
   y= z*x;
   cout << "Electricity charge (baths) = " << y <<endl;}
}
while (a<0||b<0);

    system ("pause");
    return 0;
}
 
