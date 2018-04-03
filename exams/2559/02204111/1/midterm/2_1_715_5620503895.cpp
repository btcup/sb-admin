//5620503895 Phutthaphong Phongsukwetchakun
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i=0;
    float a,r,one;
   cout<<"Enter n,and r:";
            cin>>n>>a>>r;
   for(i=1;i>0;i++)
{
   cout<<"Enter n,and r:";
   cin>>n>>a>>r;

   if(n>0&&a>0&&r<0)
            {
            cout<<"The geometric progression of n="<<n<<"a="<<a<<"r="<<r<<":";
            one=a*pow(r,i++);
            cout<<"one"<<" ";
            //cout<<"The summation:"<<sum;
            break; 
            }
   else if(n>0&&a>0&&r>0)
            {
            cout<<"The geometric progression of n="<<n<<"a="<<a<<"r="<<r<<":";
            one=pow(r,i++);
            cout<<"one"<<" ";
            //cout<<"The summation:"<<sum;
            break; 
            }
   else if(n>0&&a<0&&r>0)
            {
            cout<<"The geometric progression of n="<<n<<"a="<<a<<"r="<<r<<":";
            one=a*pow(r,i++);
            cout<<"one"<<" ";
            //cout<<"The summation:"<<sum;
            break; 
            }
            
               
   else 
        cout<<"c cannot be both a negative integer and a zero";
        }             
system("pause");
return 0;    
}
