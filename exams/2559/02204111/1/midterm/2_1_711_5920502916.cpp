#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i;
    float a,r,x,sum;
    cout<<"Enter n, a and r: ";
    cin>>n>>a>>r;
    while(n<=0||a==0||r==0)
    {
      if(n<=0)
      cout<<"n cannot be both a negative integer and a zero"<<endl;       
      else if(a==0)
      cout<<"a cannot be a zero"<<endl;       
      else if(r==0)
      cout<<"r cannot be a zero"<<endl;
      else if(n<=0&&a==0&&r==0)
      {
      cout<<"n cannot be both a negative integer and a zero"<<endl;
      cout<<"a and r cannot be zeros"<<endl;   
      }
      cout<<"Enter n, a and r: ";
      cin>>n>>a>>r;
    }
    cout<<"The geometric progression of n="<<n<<","<<"a="<<a<<","<<"r="<<r<<":"<<endl;
    for(i=0;i<n;i++)
    {
    x=a*pow(r,i);
    cout<<x<<"\t";
    }
    cout<<endl;
    cout<<"The summation: ";
    for(i=0;i<n;i++)
    {
     x=a*pow(r,i);
     sum=x+sum;
    }
    cout<<sum<<endl;
system("pause");
return 0;  
}
