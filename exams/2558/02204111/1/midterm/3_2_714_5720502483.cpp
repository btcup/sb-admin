#include<iostream>
using namespace std;
int main()
{
    long long n;
    cout<<"Please input number : ";
    cin>>n;
    cout<<endl;
    if (n%2==0)
    {
    cout<<"Summation of Even number";
    cout<<endl;
    }
    
    else if (n%2==1)
    {
    cout<<"Summation of Odd number";
    cout<<endl;
    }
    
    else if (n<0)
    {
    cout<<"!! Wrong Input !!";
    cout<<endl;
    }
    
    system("pause");
    return 0;
}
