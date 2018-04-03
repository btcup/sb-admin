#include <iostream>
using namespace std;
int main()
{
    double a,b,c,x,y,z,f,i,pay;
    char ch;
   cout<<"-------- Car lease calculator ---------"<<endl;
    cout<<"Enter car modle:";
    cin>>ch;
    cout<<"Enter number of year (1-6):";
    cin>>x;
    
    
           if(x>6)
    {cout<<"Error!, number of year is not in range";}
    else            {
    cout<<"Enter percentage of down payment :";
    cin>>y;
    if(ch=='A')
   {a=1385000;
    b=a/100*y;
    f=a-b;
    if (x<4)
            {
            i=f*(1.99/100)*x;
            pay=(f+i)/(x*12);
            }
    else {
            i=f*(2.09/100)*x;
            pay=(f+i)/(x*12);
            }
            
    }
    if(ch=='B')
   {a=511500;
    b=a/100*y;
    f=a-b;
    if (x<4)
            {
            i=f*(1.69/100)*x;
            pay=(f+i)/(x*12);
            }
    else {
            i=f*(1.79/100)*x;
            pay=(f+i)/(x*12);
            }
    }
    if(ch=='C')
   {a=738000;
    b=a/100*y;
    f=a-b;
    if (x<4)
            {
            i=f*x*(1.89/100);
            pay=(f+i)/(x*12);
            }
    else {
            i=f*(1.99/100)*x;
            pay=(f+i)/(x*12);
            }
    }
    if(ch=='J')
   {a=694000;
    b=a/100*y;
    f=a-b;
    if (x<4)
            {
            i=f*(1.89/100)*x;
            pay=(f+i)/(x*12);
            }
    else {
            i=f*(1.99/100)*x;
            pay=(f+i)/(x*12);
            }
    }cout<<"--------------------------------------"<<endl;
    cout<<"Financing amount:"<<f<<endl;
    cout<<"Amount of interrest:"<<i<<endl;
    cout<<"Monthly payment:"<<pay<<endl;
    }
    
    system ("pause");
    return 0;}
