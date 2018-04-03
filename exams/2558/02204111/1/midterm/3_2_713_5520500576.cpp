#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long a;
    cout<<"Please int put number:"<<endl;
    cin>>a;
    if(a%2==0&&a>0)
    cout<<"Summation of Even number"<<endl;
    else if(a%2!=0&&a>0)
    cout<<"Summation of Odd number"<<endl;
    else if(a<0)
    cout<<"!! Wrong number !!"<<endl;
    system("pause");
     return 0;
}      
