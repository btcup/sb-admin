#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char x;
     
    cout<<"Are you member (Y or N) :";
    cin>>x;
    
    cout<<"How old are you ? :" ;
    cin>>a;
    
    cout<<"Normal price :";
    cin>>b;
    
    if(x=='Y')
    {
     if(a<2)
     cout<< "You have to pay "<<(b*1)<<endl;
     else if(a>=2&&a<=12)
     cout<< "You have to pay "<<(b*0.3)<<endl;
     else if(a>=12)
     cout<< "You have to pay "<<(b*0.5)<<endl;
     }
     else if(x=='N')
     {
          if(a<2)
     cout<< "You have to pay "<<(b*1)<<endl;
     else if(a>=2&&a<=10)
     cout<< "You have to pay "<<(b*0.5)<<endl;
     else if(a>10)
     cout<< "You have to pay "<<(b)<<endl;
     }     
    system("pause");
    return 0;
    
}
