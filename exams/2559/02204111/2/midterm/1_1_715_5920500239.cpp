#include <iostream> //5920500239 Siriphong Sirakunwat
using namespace std;
int main ()
{
    char name;
    float x,y,z,a,p,t,s;
    float b;
    cout<<"-------- Car lease calculator --------"<<endl;
    cout<<"Enter Car model:";
    cin>>name;
    cout<<"Enter number of years (1-6):";
    cin>>x;
    if (x>6)
    cout<<"Error!,number of years is not in range"<<endl;
    else
    {
        cout<<"Enter percentage of down payment:";
        cin>>p;
        if (name=='a'||name=='A')
        { 
           if (x<4)
           b=1.99;
           else
           b=2.09;
           z=1385000;
           a=z*p/100;
           t=z-a;
           s=(z-a)*b*x/100;
        }
        if (name=='b'||name=='B')
        { 
           if (x<4)
           b=1.69;
           else
           b=1.79;
           z=511500;
           a=z*p/100;
           t=z-a;
           s=(z-a)*b*x/100;
        }
        if (name=='c'||name=='C')
        { 
           if (x<4)
           b=1.89;
           else
           b=1.99;
           z=738000;
           a=z*p/100;
           t=z-a;
           s=(z-a)*b*x/100;
        }
        if (name=='j'||name=='J')
        { 
           if (x<4)
           b=1.89;
           else
           b=1.99;
           z=694000;
           a=z*p/100;
           t=z-a;
           s=(z-a)*b*x/100;
        }
    }
    cout<<"--------------------------------------"<<endl;
    cout<<"Financing amount:"<<t<<endl;
    cout<<"Amount of interest:"<<s<<endl;
    cout<<"Monthly payment:"<<(t+s)/(x*12)<<endl;
        
    system ("pause");
    return 0;

}
