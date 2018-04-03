//5920502673 Chayapat Summavuthi
#include <iostream>
using namespace std;
int main()
{
    int h,b,c=1385000,d=511500,f=738000,g=694000;
    float a,i,j,k,l;
    char x;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model:";
    cin>>x;
    cout<<"Enter number of years (1-6):";
    cin>>a;
    cout<<"Enter your salary:";
    cin>>b;
    cout<<"----------------------------------------"<<endl;
    if (x=='A')
    {h=c-(c*25/100);
    i=(2.09)*h;
    l=i/20;
    j=(h+l)/a*12;}
    else if(x=='B')
    {h=d-(d*25/100);
    i=(1.79)*h;
    l=i/20;
    j=((h+l)/a*12);}
    else if(x=='C')
    {h=f-(f*25/100);
    i=(1.99)*h;
    l=i/20;
    j=(h+l)/a*12;}
    else if(x=='J')
    {h=g-(g*25/100);
    i=(1.99)*h;
    l=i/20;
    j=(h+l)/a*12;}
    cout<<"Financing amount:"<<h<<endl;
    cout<<"Amount of interest:"<<l<<endl;
    cout<<"Monthly payment:"<<j<<endl;
    k=b/2;
    if(j>k)
    cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    else if(j<=k)
    cout<<"Good decision,Enjoy your new car"<<endl;
    system ("pause");
    return 0;
}
