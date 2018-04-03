#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char z;
    double a,b,c,d,e,g,f;
    int h,y=60,i,j=100;
    cout<<"Type of vehicle ((c)car or (M)Motorcycle):";
    cin>>z;
    cout<<"Arrival time:";
    cin>>a;
    cout<<"Leave time:";
    cin>>b;
    d=a*y;
    e=b*y;
    f=e-d;
    g=f/y;
    f=i;
    h=i%j;
   
    
    
    
    
    
    
    if(z=='m')
    {
            if(g<120)
            {
            cout<<g<<" hours and "<<h<<" minutes"<<endl;
            cout<<"you have to pay 0 bath"<<endl;
            }
    }
            
            
    
system("pause");
return 0;
}
    
    
    
