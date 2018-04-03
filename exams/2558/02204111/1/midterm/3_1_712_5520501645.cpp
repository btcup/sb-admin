#include<iostream>
using namespace std;
int main()
{
    int old,price;
    float pay;
    char member;
  
      cout<<"Are you member(Y or N):";
      cin>>member;   
      cout<<"How old are you?:";
      cin>>old;
      cout<<"Normal price:";
      cin>>price;
      cout<<endl;
     
      
      if(member=='Y')
      {
  
        if(old<=2)
       pay=price-(price*1.0);
       else if(old<=12)
       pay=price-(price*0.7);
       else if(old>=12)
       pay=price -(price*0.5);
       }
       
       
        if(member=='N')  
      {
        if(old<=2)
        pay=price-(price*1.0);
        else if(old<=12)
        pay=price-(price*0.5);
        else if(old>=10)
        pay=price;  
        
        }   
        
        
        
    cout<<"You have to pay "<<pay<<endl;        
    system("pause");
    return 0;
}
