//5920501774 Supussara Kaewcharoensithong
#include <iostream>
using namespace std;
int main ()
{
    double a,b,z;
    int x,y,pay,c;
    cout<<"Arrival time :";
    cin>>a;
    cout<<"Leave time :";
    cin>>b;
    x=int(a*100)%100;
    y=int(b*100)%100;
    z= ((int(b)-int(a))*60+ abs(y-x))/60;
    if(b>a)
    {
    if(y>x)
    {
           c=y-x;
           z=z;
           if(z<=3)
           {
                   pay=0;
                   }
           if(z>3&&z<=6)
           {
                        pay = (z-3)*20;
                        }
           if(z>6&&z<=8)
           {
                        pay=(z-6)*50;
                        }
           if(z>8)
           {
                  pay =500;
                  }
                        
           }
    if(y<x)
    {
           c=
           z=z-1;
            if(z<=3)
           {
                   pay=0;
                   }

           if(z>3&&z<=6)
           {
                        pay = (z-3)*20+20;
                        } 
           if(z>6&&z<=8)
           {
                        pay=(z-6)*50+50;
                        }
           if(z>8)
           {
                  pay = 500;
                  }
                        
           }
           }
    else
    {
        cout<<"You can't leave before arrival time";
        }


    cout<<z<<"hours and "<<c<<"minutes"<<endl;
    cout<<"You have to pay "<<pay<<"bath";
    
    
    system("pause");
    return 0;   
}
