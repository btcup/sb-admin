//5720551701 Pathompong Pathompong
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char x;
    double a,b,c,d,e,f,g,h;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
    cin>>x;
    cout<<"Arrival time: ";
    cin>>a;
    cout<<"Leave time: ";
    cin>>b;
    if(x=='C'||x=='M')
    {
      c=round(b-a);
      d=b-a;
      if(d>0){
      if(x=='C')
      {
      if(c<=2)
      {       cout<<d<<"hours"<<endl;
              cout<<"Yoy have to pay 0 bath";
              }
       else if(c>=3&&c<=5)
       {   
           
           e=(c-2)*30;
           
              cout<<d<<"hours"<<endl;
              cout<<"Yoy have to pay "<<e<< "bath"<<endl;
       }
       else if(c>=6&&c<=8)
       {
            e=3*30;
            f=(c-5)*50;
            g=f+e;
            cout<<d<< "hours"<<endl;
            cout<<"Yoy have to pay "<<g<< "bath"<<endl;
            }
       else if(c>8)
       {
            h=500;
            cout<<d<< "hours"<<endl;
            cout<<"Yoy have to pay "<<h<< "bath"<<endl;
            }
            }
       else if(x=='M')
       {
      if(c<=3)
      {       cout<<d<< "hours"<<endl;
              cout<<"Yoy have to pay 0 bath"<<endl;
              }
       else if(c>=4&&c<=7)
       {   
           e=(c-3)*10;
              cout<<d<< "hours"<<endl;
              cout<<"Yoy have to pay "<<e<< "bath"<<endl;
       }
       else if(c>7)
       {
            e=150;
            cout<<d<< "hours"<<endl;
            cout<<"Yoy have to pay "<<e<< "bath"<<endl;
            }
            }
            }
            else if(d<0)
            cout<<"You can't leave before arrival time"<<endl;}
                 
            
                                        
            else
            cout<<"ERROR"<<endl;
                 
system("pause");
    return 0;
}
