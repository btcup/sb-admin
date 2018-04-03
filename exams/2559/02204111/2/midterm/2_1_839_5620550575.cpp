//5620550575 pariwat Ramangthong
#include<iostream>
using namespace std;
int main()
{
    char a;
    const double b=0.25;
    double x,c,f,e,d;
    cout<<"------- Car lease calculator-------"<<endl;
    cout<<"Enter car model: "; cin>>a;
    cout<<"Enter number of years (1-6): "; cin>>x;
    cout<<"Enter your salary: "; cin>>c;
if(x<=6)
{
    if(a=='B')
    {
              f=511500-(511500*b);
              e=f*0.0179*5;
              d=(f+e)/(x*12);
    }
    else if(a=='A')
    {
              f=1385000-(1385000*b);
              e=f*0.0209*x;
              d=(f+e)/(x*12);
    }
    else if(a=='C')
    {
              f=738000-(738000*b);
              e=f*0.0199*x;
              d=(f+e)/(x*12);
    }
    else if(a=='J')
    {
              f=694000-(694000*b);
              e=f*0.0199*x;
              d=(f+e)/(x*12);
    }
}
    cout<<"-----------------------------------"<<endl;
    cout<<"Financing amount: "<<f<<endl;
    cout<<"Amount of interest: "<<e<<endl;
    cout<<"Monthly payment: "<<d<<endl;
    if(d>c/2)
    cout<<"The monthy payment is over than 50% of your salary!!"<<endl;
    else
    cout<<"Good decision, Enjoy your new car"<<endl;
    system("pause");
    return 0;
}
