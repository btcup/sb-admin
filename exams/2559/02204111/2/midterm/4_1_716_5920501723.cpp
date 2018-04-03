//5920501723 sita poonsuk
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int p,x,y;
    float a,b,z;
    char Type,C,M;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
    cin>>Type;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    cout<<endl;
    z=b-a;
    x=int(ceil(z));
    y= (float(z-int(z)))*100;
    if (Type=='C')
        {
        if (x<0)
            cout<<"You can't leave before arrival time ";
        else if (x<=2 )
          {
           cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
           cout<<"You have to pay 0 bath "<<endl;
           }
        else if(x<=5&&x>=3)
            {
             cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
              p=x*30;
              cout<<"You have to pay "<<p<<"bath"<<endl;
              }
        else if(x<=8&&x>=6)
             {
              cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
              p=x*50;
              cout<<"You have to pay "<<p<<"bath"<<endl;
              }
        else if (x>8)
              {
              cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
              p=500;
              cout<<"You have to pay "<<p<<"bath"<<endl;
              }
       }
    else if (Type=='M')
     {
       if (x<0)
             cout<<"You can't leave before arrival time ";
       else if (x<=3)
          {
           cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
           cout<<"You have to pay 0 bath "<<endl;
           }
        else if(x<=7&&x>=4)
            {
             cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
              p=x*10;
              cout<<"You have to pay "<<p<<"bath"<<endl;
              }
        else if (x>7)
              {
              cout<<int(z)<<"hours and "<<y<<"minutes"<<endl;
              p=150;
              cout<<"You have to pay "<<p<<"bath"<<endl;
              }
      }
     else
      cout<<"ERROR"<<endl;
system ("pause");
return 0;
}
