#include <iostream> //5920503823 Pattaraporn Woottapanit
#include <cmath>
using namespace std;
int main()
{
    int n,x;
    double a,r,i;
    cout<<"Enter n, a and r:";
    cin>>n>>a>>r;
    if (n<=0)
             cout<<"n cannot be both a negative integer and a zero";
    else if (a==0||r==0)
    cout<<"a and r cannot be zero";
 else 
 cout<<" The geometric progression of"<<"n="<<n<<","<<"a="<<a<<","<<"r="<<r<<endl;
 x=a*pow(r,i);
 cout<<x;
 cout<<"The summation:"<<x<<endl;
 
 
 system ("pause");
 return 0;
}
