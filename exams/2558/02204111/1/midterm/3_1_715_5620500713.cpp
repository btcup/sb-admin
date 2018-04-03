#include<iostream>
using namespace std;
int main()
{
    int o;
    float x,p;
    char y;
    {
        cout<<"Are you member (Y or N) : ";
        cin>>y;
        cout<<"How old are you? : ";
        cin>>o;
        cout<<"Normal price : ";
        cin>>p;
        }
         if(y=='Y')
         {
        if(o<2)
         {
         x=(p*(0/100));
         cout<<"You have to pay "<<x<<endl; 
         }
        else if(2<o&&o<12)
        {
          x=(p*(30.0/100));
          cout<<"You have to pay "<<x<<endl;       
          }
        else if(o>12)
          {
          x=(p*(50.0/100));
          cout<<"You have to pay "<<x<<endl;
          }
          }
          if(y=='N')
           {
        if(o<2)
         {
         x=(p*(0/100));
         cout<<"You have to pay "<<x<<endl; 
         }
        else if(2<=o&&o<=10)
        {
          x=(p*(50.0/100));
          cout<<"You have to pay "<<x<<endl;       
          }
        else if(o>10)
          {
          x=(p*(100/100));
          cout<<"You have to pay "<<x<<endl;
          }
          }
system("pause");
return 0;
}
        
