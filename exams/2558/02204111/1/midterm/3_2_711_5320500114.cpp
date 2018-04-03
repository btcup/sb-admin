#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum;
    long long n;
    cout<<"Please input number :";
    cin>>n;
    if(n%2==0)
    cout<<"Summation of Even number"<<sum<<endl;
    sum=n;
    if(n%2!=0)
    cout<<"Summation of odd number"<<sum<<endl;
    sum=n;
    if(n<0)
    cout<<"!!Wrong Input!!";
    system("pause");
    return 0;
}
    
