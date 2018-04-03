//5920552085 Wichuda Phromsin
#include <iostream>
using namespace std;
int main()
{
    char M;
    int x,y,z,a=1385000,b=511500,c=738000,d=694000;
    float e=2.09,f=1.79,g=1.99,h=1.99,i,j,k;
    cout<<"Enter car model:";
    cin>>M;
    cout<<"Enter number of years(1-6):";
    cin>>x;
    cout<<"Enter percentage of down payment:";
    cin>>y;
     if(M=='A'&& x>=1)
     { z = a-(a/100*y);
       cout<<"Financing amout:"<<z;
       i = z*(e/100)*x;
       cout<<"Amount of interest:"<<i;
       j = (z+i)/y;
     cout<<"Monthly payment :"<<j;
     }
     else if(M=='B'&& x>=1 && x<=6 )
     {  z = b-(b/100*y);
       i = z*(f/100)*x;
       j = (z+i)/y;
     cout<<"Financing amout:"<<z;
     cout<<"Amount of interest:"<<i;
     cout<<"Monthly payment :"<<j;
          }
     else if(M=='C'&& x>=1 && x<=6)
     {  z = c-(c/100*y);
        i = z*(g/100)*x;
        j = (z/y)+(i/y);
     cout<<"Financing amout:"<<z;
     cout<<"Amount of interest:"<<i;
     cout<<"Monthly payment :"<<j;
          }
           else if(M=='J'&& x>=1 && x<=6)
     {  z = d-(d/100*y);
       i = z*(h/100)*x;
       j = (z+i)/y;
     cout<<"Financing amout:"<<z;
     cout<<"Amount of interest:"<<i;
     cout<<"Monthly payment :"<<j;
          }
          else if(x>6)
          cout<<"Error!, number of years is not in range";
          system("pause");
          return 0;
} 
    
    

