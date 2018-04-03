//5920500107 thirawit yuenyao
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char a;
    int x;
    double y,z;
    double n,m,i,j;
 
     cout<<"--------Car lease calculator--------"<<endl;
     cout<<"Enter car model(A,B,C,J): ";
     cin>>a; 
     cout<<"Enter number of year: ";
     cin>>x;
 
     if (x<1 || x>6)
     cout<<"Error!,number of years is not in range"<<endl;
     else
     {
     cout<<"Enter percentage of down payment: ";
     cin>>y;
     cout<<"------------------------------------"<<endl;
 
     if(a=='A')
     {
      z=1385000; 
      n=2.09;
     }
     else if(a=='B')
     {
      z=511500;  
      n=1.79;
     }
     else if(a=='C')
     {
      z=738000;  
      n=1.99;
     }        
     else if (a=='J')      
     {
      z=694000;  
      n=1.99; 
     } 
 
     if(x<4)
     n=n-0.1;
 
     if(y==0)
     i=z;
 
     i=(z-((z*y)/100.0));
 
     cout<<"Financing amount: "<<i<<endl;
 
     m=(((i*n)/100.0)*x);
 
     cout<<"Amount of interrest: "<<m<<endl;
 
     j=(i+m)/(x*12);
 
     cout<<"Monthly payment: "<<j<<endl;
}    
    system("pause");
    return 0;

}
