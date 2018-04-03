#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,l;
    int p,x,y;
    cout<<"Arrival time :";
    cin>>a;
    cout<<"Leave time :";
    cin>>l;
    x=int(l-a);
    y=int(l-a)%60*10;
    cout<<x<<" hours and "<<y<<" minutes"<<endl;
    
            
    
    

    system("pause");
    return 0;
}
