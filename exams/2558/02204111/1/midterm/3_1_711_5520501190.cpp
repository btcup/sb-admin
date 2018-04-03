#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char Y,N,old,x,pay,member;
    cout<<"Are you member (Y or N):";
    cin>>Y;
    cout<<"How old are you?:";
    cin>>old;
    cout<<"Normal price:";
    cin>>x;
    cout<<"You have to pay";
    cout<<endl;
    
    if(old<2)
    {
    pay=(x-x)/100;
    }
    else if(old>=2&&old<=12)
    {
    pay=(x-70)/100;
    }
    else 
    {
    pay=(x-50)/100;
    }
system("pause");
return 0;
}
