//5920503106 Name Thanakorn Tulyod
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a;
    float x,y,g,f,d;
    char b;
    cout<<"Type of vehicle ((c) Car or (M) Motor cycle):";
    cin>>b;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    d=((int(y)*60+((y-int(y))))-(int(x)*60+(x-int(x))))/60;
    g=int((int(y)*60+((y-int(y))*100))-(int(x)*60+(x-int(x))*100))%60;
    (f)=d+(g/100);
    if (x<y)
    {
    if (b=='C')
    {
               if (f<2)
               {
                       a=0;
               }
               else if (f>3||f<5)
               {
                    a=f*30;
               }
               else if (f>5||f<8)
               {
                    a=f*50;
               }
               else if (f>8)
               {
                    a=500;
               }
               
    }
    else if (b=='M')
    {
               if (f<3)
               {
                       a=0;
               }
               else if (f>3||f<7)
               {
                    a=f*10;
               }
               else if (f>7)
               {
                    a=f*50;
               }
    }
    cout<<d<<"hours and "<<g<<endl;
    cout<<"You have to pay "<<a<<"baht"<<endl;
    }
    else
    cout<<"You can't lave before arrival time"<<endl;
    system ("pause");
    return 0;
}

