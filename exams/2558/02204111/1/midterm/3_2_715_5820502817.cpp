#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cout<<"Please input number: ";
    cin>>n;
    if(n<0)
    cout<<"!!Wrong Input!!"<<endl;
    if(n%2==0&&n>0)
    cout<<"Summation of Even number"<<endl;
    if(n%2==1&&n>0)
    cout<<"Summation of Odd number"<<endl;
                     
    system("pause");
    return 0;
}
