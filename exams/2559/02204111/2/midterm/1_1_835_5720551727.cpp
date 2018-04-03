#include<iostream>//5720551727Praniti Tanpichai
using namespace std;
int main ()
{
    char A;
    double x,y,z,l,m;
    cout<<"------- Car Lease calculator ----------"<<endl;
    cout<<"Enter car model :";
    cin>>A ;   
    cout<<"Enter number of year (1-6) :";
    cin>>x ;
    if (x<1&&x>6)
    cout<<"Error!,number of year is not in range";
    else 
   
    cout<<"Enter percentage of down payment :";
    cin>>y;
    cout<<"-----------------------------------------"<<endl;
{    
    if (A='A')
    z=1385000-1385000*(y/100);
    else if (A='B')
    z=511500-511500*(y/100);
    else if (A='C')
    z=738000-738000*(y/100);
    else if (A='J')
    z=694000-694000*(y/100);
    cout<<"Financing amount :"<<z<<endl;
    
} 
   
    if (A='A')
    l=z*0.0209*x;
    else if (A='B')
    l=z*0.0179*x;
    else if (A='C')
    l=z*0.0199*x;
    else if (A='J')
    l=z*0.0199*x;
    cout<<"Amount of interest :"<<l<<endl;
    m=(l+z)/(x*12);
    cout<<"monthly payment"<<m<<endl;
   
    
  
    
    system ("pause");
    return 0;
}
