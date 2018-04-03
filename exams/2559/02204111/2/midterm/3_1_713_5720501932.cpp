#include<iostream>//5720501932 tharin wanaelor
using namespace std;
int main()
{
    float a,b,d;
    float c;
    float y;
    string s="you can't leave before arrival time";
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    c = b-a;
    c=int(c);
    d=(b-a)*100;
    
    d=int(d)%100;
    if(d>=60)
    d=d-40;
    else
    d=d;
    
    if(b-a>0)
    {cout<<c<<" hours and "<<d<<" minutes"<<endl;
     if(d>=15)
     { y=(c+1);
     if(c<=3)
    y=0;        
    else if (c>=4&&c<=6)       
     y=y*20;
     else if (c>=7&&c<=8)       
     y=y*50;
     else if(c>8)        
     y=500;
     }
     else
     {
     y=c;
     if(c<=3)
    y=0;        
    else if (c>=4&&c<=6)       
     y=y*20;
     else if (c>=7&&c<=8)       
     y=y*50;
     else if(c>8)        
     y=500;
       cout<<"You have to pay "<<y<<"bath"<<endl;   }}
      else
      cout<<"you can't leave before arrival time"<<endl;
    
                
     system("pause");     
    return 0;         
             
    }
