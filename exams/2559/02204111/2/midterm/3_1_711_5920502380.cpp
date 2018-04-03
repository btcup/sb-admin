//5920502380 Thantita Jantarat 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float m,Leave,Arrival;
    cout<<"Arrival time:";
    cin>>Arrival;
    cout<<"Leave time :";
    cin>>Leave;
    
    //m=(Leave-Arrival)+0.15
    
    if (Leave-Arrival>=0||Leave-Arrival<=3)
    cout<<"You have to pay 0 bath"<<endl;
    {if (Leave-Arrival>=4||Leave-Arrival<=6) 
    cout<<(Leave-Arrival)*20;
    else if (Leave-Arrival>=7||Leave-Arrival<=8)
   cout<<(Leave-Arrival)*50;
    else if (t>8)
    cout<<"You have to pay 500 bath"<<endl;
    }
    
   // {
        //cout<<t<<"hours and "<<m<<"minutes"<<endl;
   //}
    else
    cout<<"You can't leave before arrival time";

return 0;
}
