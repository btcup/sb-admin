#include <iostream>
using namespace std;
int main()
{   
    char member;
    double x, price,pay,rate;
    
    cout<<"Are you member (Y or N)";
    cin>>member;
    cout<<"How old are you?:";
    cin>>x;
    cout<<"Normal price :";
    cin>>pay;
    
    if(member=='Y') 
      {
        if(x<2) 
           rate=pay*1;
        else if (x>=2&&x<=12)
          rate=pay*0.7;
        else 
         rate=0.5;
     }
   else if(member=='N') 
       {
        if(x<2) 
           rate=pay*1;
        else if (x>=2&&x<=10)
          rate=pay*0.5;
        else 
         rate=pay*0;
     }
  pay=pay-rate;
   cout<<"you have to pay "<<pay<<endl;
    
    
    
    system ("pause");
    return 0;
}
