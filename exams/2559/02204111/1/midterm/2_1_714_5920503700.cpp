//5920503700 Thanisa Pleehajinda
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,p;
    float a,r,ans;
    cout<<"Enter n, a and r: ";
    cin>>n>>a>>r;
    cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<endl;
    p=1;
    ans=a*pow(r,p);
    
    for(i=n;n>0;n--)
    {
                    cout<<a;
                    cout<<ans;
                    p++;
                    
     }
   cout<<"n cannot be boyh a negative integer and a zero";
   if(a<0||r<0)
   cout<<"a and r cannot be zero";
system("pause");
return 0;
}
