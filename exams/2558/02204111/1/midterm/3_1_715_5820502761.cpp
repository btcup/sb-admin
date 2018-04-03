#include<iostream>
using namespace std;
int main()
{
    int x,y,sum;
    char m;
    cout<<"Are you member (Y or N): ";
    cin>>m;
    cout<<"How old are you?: ";
    cin>>x;
    cout<<"Normal price : ";
    cin>>y;
    cout<<endl<<endl;
    if(x<2)
           cout<<"You have to pay "<<0;
    else if(m=='Y')
    {
            if(x>=2&&x<=12)
            cout<<"You have to pay "<<y-(y*0.7)<<endl;
            if(x>12)
            cout<<"You have to pay "<<y-(y*0.5)<<endl;
    }
    else if(m=='N')
    {
            if(x>=2&&x<=10)
            cout<<"You have to pay "<<y-(y*0.5)<<endl;
            if(x>10)
            cout<<"You have to pay "<<y<<endl;
    }
    system("pause");
    return 0;
}
