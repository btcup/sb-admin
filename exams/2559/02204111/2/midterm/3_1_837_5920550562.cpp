//5920550562 patcharin wongsretra
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double t1,t2,x,y,z;
    cout<<"Arrival time: ";
    cin>>t1;
    cout<<"Leave time: ";
    cin>>t2;
    x=t1-t2;
    if(abs(x)>0.0&&abs(x)<4&&t1<t2)
    { 
    z=(t2-floor(t2))+((t1-floor(t1))-0.6);
     cout<< floor(abs(x))<<" hours and " << abs(z)<< " minutes" <<endl;
     cout<<"You have to pay 0 bath";
    }
    
    
    else if(abs(x)>=4&&abs(x)<=6&&t1<t2)
    {
         cout<< floor(abs(x))<<"hours and"<<(abs(x)- floor(abs(x)))*100 <<endl;
         y=((abs(x))-3)*20;
         cout<<"You have to pay " <<y<<" bath";
         
    }
    else if(abs(x)>=7&&abs(x)<=8&&t1<t2)  
    {
         cout<<"";
     }
     else if(abs(x)>8&&t1<t2) 
     {
          cout<<"b";
      } 
      else if(t1>t2)
      {
          cout<<"You can't leave before arrival time."<<endl;
      }    
        
        
        
        
        
        system("pause");
        return 0;
        }
        
    
