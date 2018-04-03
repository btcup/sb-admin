#include<iostream>  /*Kitchapoln Tunnitisupawong Nisit No. 5920551267 Group 839*/
#include<cmath>
using namespace std;
int main()
{
    int x,sum,a;
    double b;
    sum=0;
    x=0;
    b=0;
    while(x>=0)    
{
    cout<<"input value: ";
    cin>>x;
    if(x>=0&&x<=9)
    {
    a=x;
    sum=sum*10+a;
    }
    if(x>9)
    cout<<"invalid input\n"<<endl;
}
    cout<<"Your money is "<<sum<<" = ";
    system("pause");
    return 0;
}

