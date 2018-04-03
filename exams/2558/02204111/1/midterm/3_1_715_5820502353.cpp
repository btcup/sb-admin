#include<iostream>
using namespace std;
int main()
{
    char a;
    float x,y;
    cout<<"Are you member (Y or N):";
    cin>>a;
    cout<<"How old are you?:";
    cin>>x;
    cout<<"Normal price :";
    cin>>y;
    if(a=='Y')
    {
              if(x<2)
              cout<<"You have to pay"<<y-y<<endl;
              if(x>=2&&x<=12)
              cout<<"You have to pay"<<y-y*0.7<<endl;
              if(x>12)
              cout<<"You have to pay"<<y-y*0.5<<endl;
    }
    else if(a=='N')
    {
              if(x<2)
              cout<<"You have to pay"<<y-y<<endl;
              if(x>=2&&x<=10)
              cout<<"You have to pay"<<y-y*0.5<<endl;
              if(x>10)
              cout<<"You have to pay"<<y<<endl;
    }
system("pause");
return 0;
}
