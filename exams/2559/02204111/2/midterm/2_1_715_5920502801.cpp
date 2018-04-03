#include <iostream> //5920502801 Piyawat sriueng
using namespace std;
int main ()
{
    double a,b,x,y,z;
    char c;
    cout<<"------- Car lease calculator ------- "<<endl;
    cout<<"Enter car model : ";
    cin>> c;
    cout<< "Enter number of years (1-6) : ";
    cin>>a;
    cout<< "Enter your salary: ";
    cin>>b;
    cout<<"---------------------------------------------"<<endl;
    switch (c)
    {
         case 'A':x=1385000*75/100;
         cout<<"Financing amount:"<< x <<endl;
         y=((x*2.09)/100*a);
         cout<<"Amout of interest:"<< y <<endl;
         z=(x+y)/(a*12);
         cout<<"mouthly payment"<< z <<endl;break;
         case 'B':x=511500*75/100;
         cout<<"Financing amount:"<< x <<endl;
         y=((x*1.79)/100)*a;
         cout<<"Amout of interest:"<< y <<endl;
         z=(x+y)/(a*12);
         cout<<"mouthly payment"<< z <<endl;break;
          case 'C':x=738000*75/100;
         cout<<"Financing amount:"<< x <<endl;
         y=((x*1.99)/100)*a;
         cout<<"Amout of interest:"<< y <<endl;
         z=(x+y)/(a*12);
         cout<<"mouthly payment"<< z <<endl;break;
          case 'J':x=694000*75/100;
         cout<<"Financing amount:"<< x <<endl;
         y=((x*1.99)/100)*a;
         cout<<"Amout of interest:"<< y <<endl;
         z=(x+y)/(a*12);
         cout<<"mouthly payment"<< z <<endl;break;
    }
    if (z<=(b*50/100))
    cout<<" Good decision, Enjoy your new cat"<<endl;
    else if (z>(b*50/100))
    cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    system ("pause");
    return 0;
}
   
