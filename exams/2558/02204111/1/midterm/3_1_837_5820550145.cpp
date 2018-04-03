#include <iostream>
using namespace std;
int main ()
{  
    char Y,N ;
    int age,price,pay;
    float spcprice;
    cout<<"Are you member(Y or N) : ";
    cin>>Y;
    if (Y)
    {
            cout<<"How old are you? :";
            cin>>age;
            cout<<"Normal price: ";
            cin>>price;
            if(age<2)
              pay=price-price;
              cout<<"You have to pay "<<pay<<endl;
            
     }
     else
     {}
         
system ("pause");
return 0 ;
}
