#include <iostream> //5920500263 kiattisak srimuang
#include <cmath>
using namespace std;
int main()
{
    char y;
    float x,z,a,b,c ;
    cout<<"Enter car model: ";
    cin>>y;
    cout<<"Enter number of years:(1-6): ";
    cin>>x;
    cout<<"Enter your salary: ";
    cin>>z;
if(y=='B')
    {
    a=511500-(0.25*511500);
    b=(a*(1.79/100))*x;
}
if(y=='A')
    {
    a=1385000-(0.25*1385000);
    b=(a*(2.09/100))*x;
}
if(y=='C')
    {
    a=738000-(0.25*738000);
    b=(a*(1.99/100))*x;
}
if(y=='J')
    {
    a=694000-(0.25*694000);
    b=(a*(1.99/100))*x;
}
    cout<<"Financing amount:"<<a<<endl;
    cout<<"Amount of inerest:"<<b<<endl;
    c=(a+b)/(x*12);
    cout<<"Mouthly paymernt:"<<c<<endl;
    if(c<=(z/2))
    cout<<"Good decision, Enjoy your new car\n";
    else 
    cout<<"The monthly payment is over than 50% of your salary!!\n";
    
    system("pause");
    return 0;
}
