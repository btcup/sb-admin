#include <iostream>
using namespace std;
int main()
{
    int old,price,pay;
    double x;
    char member;
    cout<<"Are you member (Y or N):";
    cin>>member;
    cout<<"How old are you?:";
    cin>>old;
    cout<<"Normal price:";
    cin>>price;
    if(member=='Y')
    {
         if(old<2)
         x=1*price;
         else if(old<=12)
         x=0.7*price;
         else
         x=0.5*price;
     }
     else
     {
         if(old<2)
         x=1*price;
         else if(old<=10)
         x=0.5*price;
         else
         x=0*price;
     }
       cout<<"You have to pay "<<price-x<<endl;  
    system ("pause");
    return 0;
}
