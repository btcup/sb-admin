#include<iostream>
using namespace std;
int main()
{
 char member;
 int old,price;
 
 cout<<"Are you member (Y or N) :";
 cin>>member;
 if(member=='Y')
   {
     cout<<"Hoe old are you? :";
     cin>>old;
     
     if(old<2)
     {
     cout<<"Normal price :";
     cin>>price;
     cout<<"You hove to pay :"<<0<<endl;
     }
     else if(old<=12)
     {
     cout<<"Normal price :";
     cin>>price;
     cout<<"You hove to pay :"<<price-(price*70/100)<<endl;
     }
      else
     {
     cout<<"Normal price :";
     cin>>price;
     cout<<"You hove to pay :"<<price-(price*50/100)<<endl;
     }
  }
    
    
    else if(member=='N')
   {
     cout<<"Hoe old are you? :";
     cin>>old;
     
     if(old<2)
     {
     cout<<"Normal price :";
     cin>>price;
     cout<<"You hove to pay :"<<0<<endl;
     }
     else if(old<=10)
     {
     cout<<"Normal price :";
     cin>>price;
     cout<<"You hove to pay :"<<price-(price*50/100)<<endl;
     }
      else
     {
     cout<<"Normal price :";
     cin>>price;
     cout<<"You hove to pay :"<<price<<endl;
     }
  } 
    
system("pause");
return 0;
    
}
