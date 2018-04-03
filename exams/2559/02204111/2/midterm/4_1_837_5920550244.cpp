#include<iostream>
#include<cmath>         // 5920550244 peerawat tonuntawanich
using namespace std;
int main ()
{
    char type;
    float in,out,time,mon,min,pay,hours;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
    cin>>type;
    cout<<"Arrival time : ";
    cin>>in;
    cout<<"Leave time : ";
    cin>>out;
    time=out-in;
    cout<<endl;
    if (time<0)
    cout<<"You can't leave before arrival time"<<endl;
    else
    {
    mon=ceil(time);
    hours=int(time);
    min=int (abs(((out-int(out))-(in-int(in)))*100));
    
    if (type=='C'||type=='c')
    {
                             if(time<=2)
                             pay=0*mon;
                             else if (time<=5)
                             pay=30*mon;
                             else if (time<=8)
                             pay=50*mon;
                             else if (time>8)
                             pay=500;
    }
    else if (type=='M'||type=='m')
    {
                             if(time<=3)
                             pay=0;
                             else if (time<=7)
                             pay=10*mon;
                             else if (time>7)
                             pay=150;
    }
    cout<<hours<<" hours and "<<min<<" minutes"<<endl;
    cout<<"You have to pay "<<pay<<" bath"<<endl;
    }
    
    system ("pause");
    return 0;
    
}

