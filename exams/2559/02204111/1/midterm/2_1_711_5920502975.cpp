//5920502975 Ausa nonthason
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ;
    float a,r,i,x,sum ;
    cout<<"Enter n :";
    cin>>n>>a>>r;
    while(n<=0||a==0||r==0)
    {
      if(n<=0&&a!=0&&r!=0)
      {
              cout<<"n cannot be both a negative interger and a zero"<<endl;
              cout<<"Enter n : ";
              cin>>n>>a>>r;
      }
      else if(n>0&&a==0&&r!=0)
      {
              cout<<"a cannot be a zero"<<endl;
              cout<<"Enter n : ";
              cin>>n>>a>>r;
      }
      else if(n>0&&a!=0&&r==0)
      {
              cout<<"r cannot a zero"<<endl;
              cout<<"Enter n : ";
              cin>>n>>a>>r;
      }
    }
    cout<<"The geometric profession of n = "<<n<<",a = "<<a<<",r = "<<r<<endl;
    for(i=0;i<=n-1;i++)
    {
    x=a*pow(r,i);
    cout<<x<<" ";
    cout<<"The summation : ";
    }
    
    
    
    system ("pause");
    return 0;
}
