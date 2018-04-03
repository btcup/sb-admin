#include <iostream>
using namespace std;
int main()
{
    long long x;
    cout<<"Please input number : ";
    cin>>x;
    if (x%2==0&&x>0)
cout<<"Summation of Even number \n";
    else if (x%2!=0&&x>0)
    cout<<"Summation of Odd number \n";
    else if (x==x&&x>0)
    cout<<"Summation of Odd number \n"<<x<<" = "<<x;
else (x<0);
    cout<<"! ! Wrong Input !! "<<endl;
    system ("pause");
    return 0;
}
