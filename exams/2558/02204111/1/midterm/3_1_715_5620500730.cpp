#include <iostream>
using namespace std;
int main()
{
    char x;
    float a,b;
    cout<<"Are you member (Y or N): ";
    cin>>x;
    cout<<"How old are you?: ";
    cin>>a;
    cout<<"Normal price : ";
    cin>>b;
    cout<<endl;
    
    if(x=='Y')
    {
              if(a<2)
              cout<<"You have to pay "<<0<<endl;
              else if(a>=2&&a<=12)             
              cout<<"You have to pay "<<b-(b*(70.0/100))<<endl;
              else if(a>12)
              cout<<"You have to pay "<<b-(b*(50.0/100))<<endl;
    }
    else if (x=='N')
    {
              if(a<2)
              cout<<"You have to pay "<<0<<endl;
              else if(a>=2&&a<=10)             
              cout<<"You have to pay "<<b-(b*(50.0/100))<<endl;
              else if(a>10)
              cout<<"You have to pay "<<b<<endl;
    }
system ("pause");
return 0;
}
