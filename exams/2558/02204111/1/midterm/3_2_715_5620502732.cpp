#include <iostream>
using namespace std;
int main ()
{
    long long n,y,i,z;
    cout<<"Please input number : ";
    cin>>n;
    if(n<0)
    cout<<"!! Wrong Input !!"<<endl;
    else if(n%2==0)
    {
         cout<<"Summation of Even number"<<endl;
         for(i=1;i<=n;i*=10)
         {
             y=n%i;
             cout<<y<<endl;
         }
    }
    else
    {
         cout<<"Summation of Odd number"<<endl;
         for(i=1;i<=n;i*=10)
         {
             y=n%i;
             cout<<y<<endl;
         }
    }
    system ("pause");
    return 0;
}
