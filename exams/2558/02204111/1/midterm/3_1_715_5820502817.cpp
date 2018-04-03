#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,p;
    char m;
    cout<<"Are you memeber(Y or N): ";
    cin>>m;
    cout<<"How old are you?: ";
    cin>>n;
    cout<<"Normal price: ";
    cin>>p;
    if(m=='Y')
    {
            if(n<2)
            cout<<"You have to pay "<<p-(p*100)/100<<endl;
            if(n>12)
            cout<<"You have to pay "<<p-(p*50)/100<<endl;
            else
            cout<<"You have to pay "<<p-(p*70)/100<<endl;
            }
    if(m=='N')
    {
            if(n<2)
            cout<<"You have to pay "<<p-(p*100)/100<<endl;
            if(n>10)
            cout<<"You have to pay "<<p-(p*0)/100<<endl;
            else
            cout<<"You have to pay "<<p-(p*50)/100<<endl;
            }
            system("pause");
            return 0;
            }
