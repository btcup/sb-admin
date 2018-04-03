//Pakkapong Arkornchee 5920502495
#include<iostream>
using namespace std;
int main()
{
    float i,o;
    int t,a,b,c,t1,t2,m,k;
    cout<<"Arrival time : ";
    cin>>i;
    cout<<"Leave time : ";
    cin>>o;
    t1=int(i)*60+int(i*100)%100;
    t2=int(o)*60+int(o*100)%100;
    t=t2-t1;
    a=t/60;
    b=t%60;
    if(b>=15)
    {
     a=a+1;
    }
    if(a<4)
    {
     cout<<"You can't leavebefore arrival time"<<endl;
    }
    else if(a>8)
    {
     cout<<"You have to pay 500 bath"<<endl;
    }
    else
    {
    cout<<a<<" hours and "<<b<<" minutes"<<endl;
     while(a>6&&a<8)
     {
      k=k+50;
      a--;
     }
     while(a>3&&a<7)
     {
      m=m+20;
      a--;
     }

    cout<<"You have to pay "<<m+k<<" bath"<<endl;
    }
    system("pause");
    return 0;
    
} 
