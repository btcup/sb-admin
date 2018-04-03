#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long x;
    
    cout<<"Please input number :";
    cin>>x;
    
    if(x%2==0)
    {
      cout<<"Summation of Even number"<<endl;
    
    }
    if(x%2==1)
      {
         cout<<"Summation of Odd number"<<endl;
      }
    if(x==x)
      {
         cout<<"Summation of Odd number"<<x<<endl;
      }
      if(x<0)
      {
         cout<<"!! Wrong Input !!"<<endl;
      }
    
    
    system ("pause");
    return 0;
}
