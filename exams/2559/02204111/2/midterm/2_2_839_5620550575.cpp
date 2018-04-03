//5620550575 Pariwat Ramangthong
#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n;
    cout<<"Enter an integer: "; cin>>a;
    for(i=a+1;i>=a;i--)
{
    if(a%100!=0)
    n++;
    if(a%10!=0)
    n++;
    if(a%1==0)
    n++;
}
    cout<<"Nember of digit is "<<n<<endl;
    system("pause");
    return 0;
}
