#include<iostream>
using namespace std;
int main()
{
    long long x;
    cout<<"Please input number: ";
    cin>>x;
    if(x%2==0)
    {
              cout<<"Summation of Even number"<<endl;
    }
    if(x%2!=0)
    {
              cout<<"Summation of Odd number"<<endl;
    }
system("pause");
return 0;
}
