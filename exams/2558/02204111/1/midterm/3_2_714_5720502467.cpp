#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    int m=1,x,i,sum=0;
    cout<<"Please input number :";
    cin>>n;
    cout<<"Summation of even number"<<endl;
    if(n>0)
    {
     for(m=1;m%n==2;m++)
    {  sum=sum+m%n;
   cout<<sum;}}
    system("pause");
    return 0;
}

