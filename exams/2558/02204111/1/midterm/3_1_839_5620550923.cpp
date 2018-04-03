#include <iostream>
using namespace std;
int main()
{
    double old,price,i;
    char m;//m=member
    
    cout<<"Are you member (Y or N): ";
    cin>>m;
    cout<<"How old are you?: ";
    cin>>old;
    cout<<"Normal price : ";
    cin>>price;
    
    if(m=='Y')
    {
       if( old<2 )
       {
          price=0;
       }
       else if( old>=2 && old<=12 )
       {
          i = price*0.7;
          price = price-i;
       }
       else if( old>12 )
       {
          i = price*0.5;
          price = price-i;
       }
    }
    else if(m=='N')
    {
       if( old<2 )
       {
          price = 0;
       }
       else if( old>=2 && old<=10 )
       {
          i=price*0.5;
          price = price-i;
       }
       
    }
    cout<<"You have to pay "<< price <<endl;
    
    system("pause");
    return 0;
}
