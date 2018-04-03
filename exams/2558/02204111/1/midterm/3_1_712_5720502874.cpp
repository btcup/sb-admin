#include<iostream>
using namespace std;
int main()
{
    char x;
    int a,b,c;
    do
    {   cout<<"Are you member(Y or N): ";
        cin>>x;
        if(x!='Y'&&x!='N')
        {
                          continue;
        }
        cout<<"How old are you?: ";
        cin>>a;
        cout<<"Normal price: ";
        cin>>b;
        if(x=='Y')
        {
                  if(a<2)
                  c=0;
                  else if(a>=2&&a<=12)
                  c=b-(0.7*b);
                  else
                  c=b-(0.5*b);
        }
        else if(x=='N')
        {
                  if(a<2)
                  c=0;
                  else if(a>=2&&a<=10)
                  c=b-(0.5*b);
                  else
                  c=b;
        }
    cout<<"You have to pay: "<<c<<endl;
    break;
    }
    while(true);
    system("pause");
    return 0;
}
