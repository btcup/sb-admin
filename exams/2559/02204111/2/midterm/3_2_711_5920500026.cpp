#include<iostream> //5920500026 Natchapong Leela-or
using namespace std;
int main()
{
    float x,y;
    int h,m,money;
    
    cout<<"Arrival time :";
    cin>>x;
    cout<<"Leave time :";
    cin>>y;
    
    if(y>x)
    {
              h=int(y-x);
              m=(int((y*100)-(x*100))%100);
              
              cout<<h<<" hours and "<<m<<" minutes"<<endl;
    
    
    cout<<"You have to pay "<<money;
    
    
    
    }
    else
    cout<<"You can't leave before arrival time"<<endl;
    
    system("pause");
    return 0;
}
