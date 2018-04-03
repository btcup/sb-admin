#include <iostream>
using namespace std;
int main()
{
    char member,x,Y,N;
    int a,b,c;
    
    cout<<"Aer you member (Y or N):";
    cin>>x;
    
    if(x=Y)
   { cout<<"How old aer you?:";
    cin>>a;}
    else if (a<=2)
    {cout<<"Normal price:";
    cin>>b;
    cout<<endl;
    c=(b*100)/100;
    cout<<"You have you pay"<<c<<endl;}
    if(a>=2||a<=12)
    {cout<<"Normal price:";
    cin>>b;
    cout<<endl;
    c=(b*70)/100;
    cout<<"You have you pay"<<c<<endl;}
    else if(a>=13)
    {cout<<"Normal price:";
    cin>>b;
    cout<<endl;
    c=(b*50)/100;
    cout<<"You have you pay"<<c<<endl;}
    
    
    
    
    
    
     if(x=N)
   { cout<<"How old aer you?:";
    cin>>a;}
    else if (a<=2)
    {cout<<"Normal price:";
    cin>>b;
    cout<<endl;
    c=(b*100)/100;
    cout<<"You have you pay"<<c<<endl;}
    if(a>=2||a<=12)
    {cout<<"Normal price:";
    cin>>b;
    cout<<endl;
    c=(b*50)/100;
    cout<<"You have you pay"<<c<<endl;}
    else if(a>=13)
    {cout<<"Normal price:";
    cin>>b;
    cout<<endl;
    c=b;
    cout<<"You have you pay"<<c<<endl;}
                         
system ("pause");
return 0;
}
