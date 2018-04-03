//5920503530 Yotsapon Sawaengkon
#include <iostream>
using namespace std; 
int main ()
{
    double in,out;
    int x,y,a,b,p;
    cout<<"Arrival time : ";
    cin>>in;
    cout<<"Leave time : ";
    cin>>out;
    if(out>=in)
    {
                  a=int(out)*60;
                  b=int(in)*60;
                  a=a+(int(out*100)%100);
                  b=b+(int(in*100)%100);
                  y=(a-b)%60;
                  x=(a-b)/60;
                  cout<<"\n"<<x<<" hours and "<<y<<" minutes "<<endl;
                  cout<<"You have to pay ";
              if (x<4&&x>0)
              {
                           if(y<15)
                           {
                                  cout<<"0 bath"<<endl;
                           }
                           if(y>=15)
                           {
                                  cout<<"20 bath"<<endl;
                           }
                           
              }
              else if (x>=4&&x<6)
              {
                            if(y<15)
                            {
                                    p=(x-3)*20;
                                    cout<<p<<" bath"<<endl;
                            }
                            if(y>=15)
                            {
                                    p=(x-2)*20;
                                    cout<<p<<"  bath"<<endl;
                            }
              }
              else if(x>=7&&x<8)
              {
                           if (y<15)
                           {
                                    p=60+((x-6)*50);
                                    cout<<p<<"  bath"<<endl;
                           }
                           if(y>=15)
                            {
                                    p=60+((x-5)*50);
                                    cout<<p<<"  bath"<<endl;
                            }
              }
              else
              {
                  cout<<"500 bath"<<endl;
              }
    }
    else
        cout<<"\n"<<"You can't leave before arrival time"<<endl;
    system ("pause");
    return 0;
}
