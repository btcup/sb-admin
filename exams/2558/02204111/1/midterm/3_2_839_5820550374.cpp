#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,sum;
    cout<<"Please input number:";
    cin>>n;
    if(n%2)
    sum=n;
    cout<<" Summation of Even number "<<endl;
    cout<<n<<"="<<sum<<endl;
    {
     if(n%1)
     sum=n;
    cout<<" Summation of Odd number "<<endl;
    cout<<n<<" = "<<sum<<endl;
    if(n<=0)
    sum= n;
    cout<<" Please input number "<< sum <<endl;
    cout<<"!! Wrong Input !!"<<endl;
   
}
    system ("pause");
return 0;
}
     
    
