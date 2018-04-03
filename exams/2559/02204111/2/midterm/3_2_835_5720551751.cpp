//phornphat rattanajan
#include<iostream>
using namespace std;
int main()
{
    double x,y,z;
    int a,b,c;

    cout<<"Enter electricity cost per unit (bahts):";
    cin>>z;
    {
    do
    {
    cout<<"enter last unit:";
    cin>>x;
     cout<<"enter current unit:";
    cin>>y;
    a=y-x;
    cout<<"Units used = "<<a<<endl;    
    b=(y-x)*z;
    cout<<"electricity charge (bahts) ="<<b<<endl;
}
while(x==-1);
}
system("pause");
return 0;
}
    
