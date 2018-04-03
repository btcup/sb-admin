//5920503572 Sakkarin Srisuwan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a=0,b=0,c,d,e,f;
    cout<<"Arrival time : "; cin>>a;
    cout<<"Leave time : "; cin>>b;
    if(b-a<0)
    {cout<<"You can't leave before arrival time"<<endl;}
    else
    {{
    c=(int(b*100)-int(a*100))/100;
    d=((int(b*100)%100%60-int(a*100)%100%60)%60)-1;
    if(d>15)
    {c++;}
    e=c;
    if(e<=3)
    {f=0;}
    else if(e>=3&&e<6)
    {f=e*20;}
    else if(e>=6&&e<8)
    {f=e*50;}
    else
    {f=500;}}
    cout<<c<<" hours and "<<d<<" minutes"<<endl;
    cout<<"You have to pay "<<f<<" bath"<<endl;}
    system("pause");
    return 0;
}
