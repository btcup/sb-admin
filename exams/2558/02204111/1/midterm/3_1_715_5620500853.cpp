#include<iostream>
using namespace std;
int main()
{
    int b,c;
    char a;
    cout<<"Are you member(Y or N):";
    cin>>a;
    cout<<"How old are you?:";
    cin>>b;
    cout<<"Normal price :";
    cin>>c;
    if(a=='Y') 
    {
                if(b<2)
             cout<<"You have to pay "<<0<<endl;
             else if(b>=2&&b<=12)
             cout<<"You have to pay "<<(c*30)/100<<endl;
             else if(b>12)
             cout<<"You have to pay "<<c/2<<endl;
             }
             else
             {
                 if(b<2)
                 cout<<"You have to pay "<<0<<endl;
                 else if(b>=2&&b<=10)
                 cout<<"You have to pay "<<c/2<<endl;
                 else if(b>10)
                 cout<<"You have to pay "<<c<<endl;
                 }
  
    
            
   

system("pause");
return 0;
}

