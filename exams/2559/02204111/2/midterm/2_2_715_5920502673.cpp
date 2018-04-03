//5920502673 Chayapat Summavuthi
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,y;
    double x;
    cout<<"Enter an integer: ";
    cin>>a;
    b=a%10;
    c=((a%100)-b);
    d=(c/10);
    e=((a%1000)-b-c);
    f=(e/100);
    g=((a%10000)-b-c-e);
    h=(g/1000);
    i=((a%100000)-b-c-e-g);
    j=(i/10000);
    if(a>=0&&a<=9)
    {x=1;
    y=pow(b,x);}
    else if(a>=10&&a<=99)
    {x=2;
    y=pow(b,x)+pow(d,x);}
    else if(a>=100&&a<=999)
    {x=3;
    y=pow(b,x)+pow(d,x)+pow(f,x);}
    else if(a>=1000&&a<=9999)
    {x=4;
    y=pow(b,x)+pow(d,x)+pow(f,x)+pow(h,x);}
    else if(a>=10000&&a<=99999)
    {x=5;
    y=pow(b,x)+pow(d,x)+pow(f,x)+pow(h,x)+pow(j,x);}
    cout<<"Number of digit is "<<x<<endl;
    if(y==a)
    cout<<a<<" is a target number."<<endl;
    else
    cout<<a<<" is not target number."<<endl;
    system ("pause");
    return 0;
}
