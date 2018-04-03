//5920550678 Korawit Pakdiphummatee
#include <iostream>
using namespace std;
int main()
{
    char car;
    float a,b,c,d,e,f;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model : ";
    cin>>car;
    switch (car)
    {   case'A':
           cout<<"Enter number of year (1-6): ";
           cin>>a;
           if (a>6)
           {
           cout<<"Error!,number of years is not in range"<<endl;
           break;
           }
           else
           {
           cout<<"Enter percentage of down payment: ";
           cin>>b;
           cout<<endl;
           cout<<"--------------------------------------";
           cout<<endl;
           c=(1385000*b)/100;
           cout<<"Financing amount : "<<c<<endl;
           d=(c*2.09)*a;
           cout<<"Amount of interest : "<<d<<endl;
           e=(c+d)/(a/12);
           cout<<"Monthly payment : "<<e<<endl;break;
           }
        case'B':
           cout<<"Enter number of year (1-6): ";
           cin>>a;
           if (a>6)
           {
           cout<<"Error!,number of years is not in range"<<endl;
           break;
           }
           else
           {
           cout<<"Enter percentage of down payment: ";
           cin>>b;
           cout<<endl;
           cout<<"--------------------------------------";
           cout<<endl;
           c=511500*(b/100);
           cout<<"Financing amount : "<<c<<endl;
           d=(c*1.79)*a;
           cout<<"Amount of interest : "<<d<<endl;
           e=(c+d)/(a/12);
           cout<<"Monthly payment : "<<e<<endl;break;
           }
        case'C':
           cout<<"Enter number of year (1-6): ";
           cin>>a;
           if (a>6)
           {
           cout<<"Error!,number of years is not in range"<<endl;
           break;
           }
           else
           {
           cout<<"Enter percentage of down payment: ";
           cin>>b;
           cout<<endl;
           cout<<"--------------------------------------";
           cout<<endl;
           c=738000*(b/100);
           cout<<"Financing amount : "<<c<<endl;
           d=(c*1.99)*a;
           cout<<"Amount of interest : "<<d<<endl;
           e=(c+d)/(a/12);
           cout<<"Monthly payment : "<<e<<endl;break;
           }
        case'J':
           cout<<"Enter number of year (1-6): ";
           cin>>a;
           if (a>6)
           {
           cout<<"Error!,number of years is not in range"<<endl;
           break;
           }
           else
           {
           cout<<"Enter percentage of down payment: ";
           cin>>b;
           cout<<endl;
           cout<<"--------------------------------------";
           cout<<endl;
           c=694000*(b/100);
           cout<<"Financing amount : "<<c<<endl;
           d=(c*1.99)*a;
           cout<<"Amount of interest : "<<d<<endl;
           e=(c+d)/(a/12);
           cout<<"Monthly payment : "<<e<<endl;break;
           }       
    }
    system ("pause");
    return 0;
}
