#include <iostream> //5920501847 saowapa pattanapongsit
#include <cmath>
using namespace std;
int main()
{
    int n,i=0,sum=0,x;
    float y;
    cout<<"Enter an interger : ";
    cin>>n;
    x=n;
    while (x>0)
    {
          x=x/10;
          i++;
          }
    cout<<"Number of digit is "<<i<<endl;
    
    y=n;
    do
    {
          y=y/pow(10.0,i-1);
          y=pow(y,i);
          sum=sum+y;
          i--;
          y=int(y)%int(pow(10.0,i));
          if (y==0)
          break;
          }
    while (i>0);
    
    cout<<n;
    if (sum==n)
       cout<<" is a target number."<<endl;
    else 
       cout<<" is not a target number."<<endl;
       
system ("pause");
return 0 ;    
}
