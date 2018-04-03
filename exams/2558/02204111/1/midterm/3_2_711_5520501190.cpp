#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,sum;
    cout<<"Plase input number:";
    cin>>n;
    if(n>=1)
    {
            if(n%2==0)
            {
            cout<<"Summation of Even number "<<endl;
            cout<<'sum'<<endl;
            sum+=n;
            }
            else if(n%2!=0)
            {
            cout<<"Summation of Even number"<<'sum'<<endl;
            sum=n++;
            }
            }
    
    else
    cout<<"!! Wrong Input !!"<<endl;
system("pause");
return 0;
}
