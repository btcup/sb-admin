#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char choice;
    int y;
    float price;
    
    cout<<"Are you member (Y or N):";
    cin>>choice;
    
   
    
              
              if (choice=='Y')
              {
                cout<<"How old are you ? :";
                cin>>y;
                cout<<"Normal price :";
                cin>>price;
                
                  if (y<=2)
                    {
                     cout<<""<<endl;
                     cout<<"You have to pay "<<(0.0/100)*price<<endl;
                     }
                  if (y>=2&&y<=12)
                    {
                     cout<<""<<endl;
                     cout<<"You have to pay "<<(price-(70.0/100)*price)<<endl;
                     }
                  if (y>12&&y<100)
                    {
                     cout<<""<<endl;
                     cout<<"You have to pay "<<(50.0/100)*price<<endl;
                     }
              }
               
               if (choice=='N')
              {
                cout<<"How old are you ? :";
                cin>>y;
                cout<<"Normal price :";
                cin>>price;
                
                  if (y<=2)
                    {
                     cout<<""<<endl;
                     cout<<"You have to pay "<<(0.0/100)*price<<endl;
                     }
                  if (y>=2&&y<=10)
                    {
                     cout<<""<<endl;
                     cout<<"You have to pay "<<(price-(50.0/100)*price)<<endl;
                     }
                  if (y>10&&y<100)
                    {
                     cout<<""<<endl;
                     cout<<"You have to pay "<<(100/100)*price<<endl;
                     }
              }
   

    
    
    system ("pause");
    return 0;
}
