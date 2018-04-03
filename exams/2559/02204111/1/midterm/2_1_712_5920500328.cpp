//5920500328 Jeeranan  Chanmanee
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,a,r,n;
    cout<<"Enter n, a and r : ";
    cin>>n>>a>>r;
    cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<": ";
       for(x=1;x>=n;x++)
       
       { x=a*pow(r,n);
        cout<<x;}
     
      
      
     
    system ("pause");
    return 0;
}
