#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char x;
    int y,z,A=1385000,B=511500;
    float a,b;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car modal : ";
    cin>>x;
    cout<<"Enter number of year (1-6): ";
    cin>>y;
    cout<<"Enter your salary: ";
    cin>>z;
    cout<<"----------------------------------------"<<endl;
    if(x=='A'){
              a='B'-('B'*0.25);
                     cout<<"Financing amount :"<<a<<endl;
                      b=('B'-('B'*0.25))*2.09*y;
                   cout<<"Amount of interest :"<<b<<endl;
                     cout<<"Monthly payment : "<<(a+b)/(y*12)<<endl;}
                      
     if (x=='B');
              {
              a='B'-('B'*0.25);
                      cout<<"Financing amount :"<<a<<endl;
                     b=('B'-('B'*0.25))*1.79*y;
                     cout<<"Amount of interest :"<<b<<endl;
                      cout<<"Monthly payment : "<<(a+b)/(y*12)<<endl;}
                     }
         if (x=='C');
              {
              a='C'-('C'*0.25);
                      cout<<"Financing amount :"<<a<<endl;
                     b=('C'-('C'*0.25))*1.99*y;
                     cout<<"Amount of interest :"<<b<<endl;
                      cout<<"Monthly payment : "<<(a+b)/(y*12)<<endl;}
     if (x=='J');
              {
              a='J'-('J'*0.25);
                      cout<<"Financing amount :"<<a<<endl;
                     b=('J'-('J'*0.25))*1.99*y;
                     cout<<"Amount of interest :"<<b<<endl;
                      cout<<"Monthly payment : "<<(a+b)/(y*12)<<endl;}
                      
    system ("pause");
    return 0;
}
