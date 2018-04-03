#include<iostream>
using namespace std;
double D(double s,double p,double q,double r,double t)
{
       double sum=0;
       sum=(s+p+q+r+s)/20;
       return sum;
       
}
double B(double a,double b,double c,double d)
{
       double total=0;
       total=a+b+c+d;
       return total;
}
int main()
{
    double a1,a2,a3,a4,a5,b,c,d,s,p,q,r,t,x,to;
    cout<<"Give the number of passengers of day 1 : ";
    cin>>a1>>b>>c>>d;
    s=B(a1,b,c,d);
    cout<<"Give the number of passengers of day 2 : ";
    cin>>a2>>b>>c>>d;
    p=B(a2,b,c,d);
    cout<<"Give the number of passengers of day 3 : ";
    cin>>a3>>b>>c>>d;
    q=B(a3,b,c,d);
    cout<<"Give the number of passengers of day 4 : ";
    cin>>a4>>b>>c>>d;
    r=B(a4,b,c,d);
    cout<<"Give the number of passengers of day 5 : ";
    cin>>a5>>b>>c>>d;
    t=B(a5,b,c,d);
    to=a1+a2+a3+a4+a5;
    cout<<"Total passenger for air asia is : "<<to<<endl;
    x=D(s,p,q,r,t);
    cout<<"The average number of passengers for all days and all fligth is : "<<x<<endl;
    cout<<"The largest number of passengers : "<<endl;
    
    system("pause");
    return 0;
}    
    
