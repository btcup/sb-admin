#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char type;
    float x,y;
    int sum=0,a,z;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
    cin>>type;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    if(y-x<0)
    {
         cout<<"You can't leave before arrival time"<<endl;
    }
    else
    {
         z=int(y-x);
         x=(x-int(x))*100;
         y=(y-int(y))*100;
         a=60-abs(x-y);
         cout<<z<<" hours and "<<a<<" minutes"<<endl;
         if(type=='C')
         {
                      if(z<=2)
                      {
                           sum=0;
                      }
                      else if(z<=5)
                      {
                           sum=z*30; 
                      } 
                      else if(z<=8)
                      {
                           sum=z*50;
                      }
                      else
                      {
                           sum=500;
                      }
         }
         if(type=='M')
         {
                      if(z<=3)
                      {
                           sum=0;
                      }
                      else if(z<=7)
                      {
                           sum=z*10; 
                      }
                      else
                      {
                           sum=150;
                      }
         }
         cout<<"You have to pay "<<sum<<" bath"<<endl;
    }
    system ("pause");
    return 0;
}
