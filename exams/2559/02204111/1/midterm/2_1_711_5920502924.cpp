#include <iostream> //5920502924 Suparat Jittithammawat
#include <cmath>
using namespace std ;
int main () 
{
    double n,a,r,x,i,sum=0 ;
    
    cout<<"Enter n, a  and r : " ;
    cin>>n>>a>>r ;
    while (n<=0||a==0||r==0)
    {
          if (n<=0) cout<<"n cannot be both a negative integer and a zero"<<endl ;
          if (a==0||r==0)
          {
                         if (a==0&&r==0) cout<<"a and r cannot be a zero"<<endl ;
                         else if(a==0) cout<<"a cannot be a zero"<<endl ;
                         else if (r==0) cout<<"r cannot be a zero"<<endl ;
                         
                         }
    cout<<"Enter n, a  and r : " ;
    cin>>n>>a>>r ;
    }
    for(i=0;i<n;i=i+1)
    {
                      x = a*(pow(r,i));
                      if(i==0) 
                      {
                               cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl ;
                               }
                      cout <<x<<" " ;
                      sum = sum+x ;
                      }
    cout <<endl<<"The summation:"<<sum<<endl ;
    system ("pause") ;
    return 0 ;
}
          
