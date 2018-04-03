#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char x;
    float n,m,y,z,a;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>x;
    cout<<"Arrival time:";
    cin>>n;
    cout<<"Leave time:";
    cin>>m;
    y=ceil(m)-ceil(n);
    a=floor(m)-floor(n);
    z=(m-n)-a;
    if(x=='C'&&m>=n)
    {
        if(y<=2)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay 0 Bath"<<endl;
        }            
        else if(3<=y&&y<=5)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay "<<y*30<<" Bath"<<endl;
        }
        else if(6<=y&&y<=8)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay "<<y*50<<" Bath"<<endl;
        }
        else if(y>= 8)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay 500 Bath"<<endl;
        }
        
    }
    else if(x=='M'&&m>=n)
    {
        if(y<=3)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay 0 Bath"<<endl;
        }
        else if(4<=y&&y<=7)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay "<<y*30<<" Bath"<<endl;
        }
        else if(y>=7)
        {
                   cout<<a<<" hours and "<<floor(abs(z*100))<<" minutes"<<endl;
                   cout<<"You have to pay 150 Bath"<<endl;
        }
        
        
    }
    else
    {
          cout<<"You can't leave before arrival time"<<endl;
    }
    
    system("pause");
    return 0;
    }
