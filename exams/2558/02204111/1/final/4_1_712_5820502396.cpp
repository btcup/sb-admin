#include<iostream>
using namespace std;
double Dec2x(double x,double y)
{      
       double a,b;
       a=x/y;
       return a;
}
int main()
{
    double y,z,x;
    do
    {
           cout<<"Enter decimal number: ";
           cin>>x;
           
           if(x>=0)
           cout<<"Enter base(2-9):";
           cin>>y;
           
    }
    while(x<0);
    z=Dec2x(x,y);
    cout<<x<<"is"<<z<<endl;
    
    system("pause");
    return 0;
    
}    
    
     
