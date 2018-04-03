//MR.ubeth Lertnantakul 5620550648 832_839

#include <iostream>
using namespace std;
int main()
{
    int n,i,x,z,y;
    cout<<"Enter a positive integer : ";cin>>n;
    x=n;
    if(n>0)
{
    for(i=0;x>0;i++)
    x=x/10;
    cout<<endl;
    cout<<"Number of digit is "<<i<<endl;
    cout<<"Factor of "<<n<<" are :"<<endl;
    for(z=1;;z++)
    {
    if(n%z==0)
    {
    y=n/z;
    cout<<z<<" * "<<y<<" = "<<n<<endl;
    y=n;
    }
    if(z>n)
    break;
    }
}
    else
    {
    cout<<endl;
    cout<<"Invalid number!!"<<endl;
    }
    system("pause");
    return 0;
}
