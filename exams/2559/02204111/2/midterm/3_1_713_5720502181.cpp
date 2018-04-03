//5720502181 Sorawit    Thongduang
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    int a,b,z,r,s,;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
     z=int(y)-int(x);
    r=x*100;
    s=y*100;
    a=int(r)%100;
    b=int(s)%100;
    
    if(b>a)
    {
           cout<<z<<" hours and "<<b-a<<" minutes"<<endl;
    }
    else if(b<a)
    {    
         
         cout<<z-1<<" hours and "<<b-a<<" minutes"<<endl;
         
         
         
    }
 
   system("pause") ;
    
    return 0;
  
    
    
    
    
} 
    
