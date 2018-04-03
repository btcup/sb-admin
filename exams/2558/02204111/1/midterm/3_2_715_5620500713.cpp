#include<iostream>
using namespace std;
int main()
{
    int sum;
    long n;
    {
          cout<<"Please input number : ";
          cin>>n;
    }
    if(n%2==0)
          {
          cout<<"Summation of Even number"<<endl;
          sum=n*(n+1);
          cout<<sum<<endl;
          }
    if(n%2==1)
          {
          cout<<"Summation of Odd number"<<endl;
          sum=sum+(n%2==0);
          cout<<sum<<endl;
          }
          else
          {
          cout<<"!! Wrong Input!!"<<endl;
          }
system("pause");
return 0;
}
