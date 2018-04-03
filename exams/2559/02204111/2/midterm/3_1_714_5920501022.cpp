#include<iostream>
using namespace std;
int main()
{
    int d,f,e;
    float a,b,c,z,y;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    c=b-a;
    d=int(c);
    
    z=d;
    
    
    if(c>0){
            {cout<<d<<"hours and "<<endl;}
            if(d>8)
            z=d*500;
            else if((d>=7)&&(d<=8))
            z=d*50;
            else if(d>=4&&d<=6)
            z=d*20;
            else if(d>0&&d<=3)
            z=d*0;
            
            cout<<"you have to pay "<<z<<" bath";
            }
    
    
    
    else
    cout<<"You can't leave before arrival time";
    
    system("pause");
    return 0;
}
    
