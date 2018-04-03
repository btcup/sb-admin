#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char y;
    cout<<"Are you member (Y or N): ";
    cin>>y;
    cout<<"How old are you?: ";
    cin>>a;
    cout<<"Normal price : ";
    cin>>b;
    if (y=='Y')
    {
    if (a<2)
    {
     cout<<"You have to pay "<<b*0<<endl;
     }
     else if ((a>=2)&&(a<=12))
     {
     cout<<"You have to pay "<<b*30/100<<endl;
     }
     else if (a>12)
     {
          cout<<"You have to pay "<<b*50/100<<endl;
     }
     }
    else if (y=='N')
    
     {
        if(a<2)
        {
        cout<<"You have to pay "<<b*0<<endl; 
        }
        else if ((a>=2)&&(a<=10))
        {
        cout<<"You have to pay "<<b*50/100<<endl;  
        }
        else if (a>=11)
        {
             cout<<"You have to pay "<<b<<endl;
             }
     }
     
    system("pause");
    return 0;
}
