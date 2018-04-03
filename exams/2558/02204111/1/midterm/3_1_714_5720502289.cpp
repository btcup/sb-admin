#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char member;
    int a,b,c;
    cout<<"Are you member (Y or N) : ";
    cin>>member;
    cout<<"How old are you? : ";
    cin>>a;
    cout<<"Normal price : ";
    cin>>b;
    if(member=='Y'&&a>0){     
                   if(a<2){
                   c=0;
                   cout<<"You have to pay "<<c;
                   }
                   else if(a>=2&&a<=12){
                   c=b-(0.7*b);
                   cout<<"You have to pay "<<c;
                   }
                   else if(a>12){ 
                   c=b-(0.5*b);
                   cout<<"You have to pay "<<c;
                   }
                   }
     else if(member=='N'&&a>0){     
                   if(a<2){
                   c=0;
                   cout<<"You have to pay "<<c;
                   }
                   else if(a>=2&&a<=10){
                   c=b-(0.5*b);
                   cout<<"You have to pay "<<c;
                   }
                   else if(a>10){ 
                   c=b;
                   cout<<"You have to pay "<<c;
                   }
                   }
    cout<<endl;
    system("pause");
    return 0;
}
