#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,i=1,a,b,c,d,e,f,g,h,j,k;
    while(x>=0)
    {
    cout<<"input value: ";
    cin>>x;
    if(x>=10)
    {
    cout<<"Invalid Input!!"<<endl<<endl;
    continue;
    }
    if(i==1)
    a=x;
    else if(i==2)
    b=x;
    else if(i==3)
    c=x;
    else if(i==4)
    d=x;
    i++;
    }
    cout<<endl;
    cout<<"Your money is "<<a<<b<<c<<d<<" = "<<a*pow(10,(i-3))<<" + "<<b*pow(10,(i-4))<<" + "<<c*pow(10,(i-5))<<" + "<<d*pow(10,(i-6))<<endl;
    system("pause");
    return 0;
}
