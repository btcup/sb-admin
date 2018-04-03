#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    float a,r,y,sum;
    
     cout<<"Enter n, a and r: ";
     cin>>n>>a>>r;
     
     while (n<=0)
     {
           cout<<"n cannot be both a negative integer and a zero"<<endl;
    
    if(a==0||r==0)
     {if (a==0&&r==0)
     cout<<"a and r cannot be a zero"<<endl;
     else if (a==0)
     cout<<"a cannot be a zero"<<endl;
     else if(r==0)
     cout<<"r cannot be a zero"<<endl;
     }
     cout<<"Enter n, a and r: ";
     cin>>n>>a>>r;
     }
     
     while(a==0||r==0)
     {if (a==0&&r==0)
     cout<<"a and r cannot be a zero"<<endl;
     else if (a==0)
     cout<<"a cannot be a zero"<<endl;
     else if(r==0)
     cout<<"r cannot be a zero"<<endl;
     cout<<"Enter n, a and r: ";
     cin>>n>>a>>r;}
     
     if (n>=0 && a!=0 &&r!=0)
     {
              cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
              
              int x=0;
              while(x<n)
              {
                y=a*pow(r,x);
                cout<<" "<<y;
                sum=sum+y;
                x++;
                }
    
    cout<<endl<<"The summation:"<<sum<<endl;
    }
     
system ("pause");
return 0;
}
     
     
    
