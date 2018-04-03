#include<iostream>
using namespace std;
int main()
{
    int a,b,pay;
    char x,Y,N;
    cout<<"Are you member (Y or N): ";
    cin>>x;
    cout<<"How old are you? :";
    cin>>a; 
    cout<<"Normal prize :";
    cin>>b;
    if(x==Y&&a<2)
    {
           pay = (b*100)/100;
    }
    else if(x==Y &&a>=2 || a<=12)
    {            
           pay = (b*30)/100;
    }
    else if(x==Y &&a>=12)
    {
            pay = (b*50)/100;
    }
   else if(x==N && a<2)
   {
           pay = b*100/100;
  }
  else if(x==N &&a>=2 || a<=10)
  {
            pay =b*50/100;    
  }                              
   else if(x==N && a>10)
   { 
         pay = b;
   }

         cout<<"You have to pay "<<pay<<endl;
system("pause");
return 0;
}
