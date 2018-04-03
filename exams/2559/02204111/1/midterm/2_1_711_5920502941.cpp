#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n,a,r,i,b,c=0;
    for(b=1;b>0;b++)
    {
                    cout<<"Enter n, a and r: ";
                    cin>>n>>a>>r;
                    if(n<=0)
                    {
                                        cout<<"n cannot be both a negative integer and a zero"<<endl;
                    }else
                    {
                        if(a==0)
                        {
                                cout<<"a cannot be a zero"<<endl; 
                        }else
                        {
                             if(r==0)
                             {
                                     cout<<"r cannot be a zero"<<endl;
                             }else
                              {
                                  cout<<"The geometric progession of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
                                  for(i=0;i<n;i++)
                                  {
                                                  cout<<a*pow(r,i)<<" "; 
                                                   c=c+(a*pow(r,i));         
                                  }
                                  cout<<endl<<"The summation : "<<c<<endl;
                                  b=-2;
                              }   
                        }   
                    }
    }
    system ("pause");
    return 0;   
}
