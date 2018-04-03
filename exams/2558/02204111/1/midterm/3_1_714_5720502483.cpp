#include<iostream>
using namespace std;
int main()
{
    char m;
    int x,y;
    cout<<"Are you member (Y or N) : ";
    cin>>m;
    cout<<"How old are you? : ";
    cin>>x;
    cout<<"Normal price : ";
    cin>>y;
    cout<<endl;
    if(m=='Y')
    {
    if(x<2)
             cout<<"You have to pay "<<(y/100)*0<<endl;
    if(x>=2&&x<=12)
             cout<<"You have to pay "<<(y/100)*30<<endl;
    if(x>12)
             cout<<"You have to pay "<<(y/100)*50<<endl;
    }
    
    else if(m=='N')
    {
    if(x<2)
             cout<<"You have to pay "<<(y/100)*0<<endl;
    if(x>=2&&x<=10)
             cout<<"You have to pay "<<(y/100)*50<<endl;
    if(x>10)
             cout<<"You have to pay "<<(y/100)*100<<endl;
    }
    system("pause");
    return 0;
}
