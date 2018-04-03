#include<iostream>
using namespace std;
int main()
{
    int b,c,sum=0;
    char a;
    cout<<"Are you member (Y or N): ";
    cin>>a;
    while(true)
    if(a=='Y')
    {
              cout<<"How old are you?: ";
              cin>>b;
              if(b<2)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     sum=0*c/100;
                     cout<<endl;
                     cout<<"You have to pay "<<sum<<endl;
                     
              }
              
              else if(b<=12)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     sum=30*c/100;
                     cout<<endl;
                     cout<<"You have to pay "<<sum<<endl;
                     
              }
              
                else 
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     sum=50*c/100;
                     cout<<endl;
                     cout<<"You have to pay "<<sum<<endl;
                     
              }
              break;
    }
    
    
    else if(a=='N')
    {
              cout<<"How old are you?: ";
              cin>>b;
              if(b<2)
              {
                     cout<<"Normal price : " ;
                     cin>>c;
                     sum=0*c/100;
                     cout<<endl;
                     cout<<"You have to pay "<<sum<<endl;
                     
              }
              
              else if(b<=10)
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     sum=50*c/100;
                     cout<<endl;
                     cout<<"You have to pay "<<sum<<endl;
                     
              }
              
              else 
              {
                     cout<<"Normal price : ";
                     cin>>c;
                     sum=100*c/100;
                     cout<<endl;
                     cout<<"You have to pay "<<sum<<endl;
                     
              }
              break;
    }               
    system("pause");
    return 0;
}
