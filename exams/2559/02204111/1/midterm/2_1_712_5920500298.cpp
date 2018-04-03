//5920500298 kantapat kunnichrtanawat
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float n,a,r,y;
    cout<<" Enter n, a and r: ";
    cin>>n>>a>>r;

    if(n>0&&a!=0&&r!=0)
       {
       y=a*pow(r,n);
       cout<<"The geometric progression of n="<<n<<",a="<<a<<",r="<<r<<" : "<< y<<endl;
       
       cout<<"The summation : "<<y<<endl;
       }
       
    
    
    
    
    if(n<0)
       {
       cout<<"Enter n, a and r: "<<n<<" "<<a<<" "<<r<<" "<<endl;
       cout<<"n cannot be both a negative integer and a zero"<<endl;
       cout<<"a and r cannot be zeros"<<endl;
       }
    if(a==0)
       cout<<"a cannot be azero"<<endl;
    if(r==0)
       cout<<"r cannot be azero"<<endl;
    
    
    
    
    
    
    
    
system ("pause");
return 0;
}
