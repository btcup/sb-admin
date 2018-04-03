#include <iostream>
using namespace std;
int main ()
{
    char x;
    int a,b,c;
    cout<<"Are you member ( Y or N ) : ";
    cin>>x;
    cout<<"How old are you? : ";
    cin>>a;
    cout<<"Normal price : ";
    cin>>b;
    if (x=='Y'&&a<2)
    cout<<"\n You have to pay "<<(b*100/100)-b<<endl; 
    else if (x=='Y'&&a>=2&&a<=12)
    cout<<"\n You have to pay "<<b-(b*70/100)<<endl;
    else if (x=='Y'&&a>12)
    cout<<"\n You have to pay "<<b-(b*50/100)<<endl;
    else if (x=='N'&&a<2)
    cout<<"\n You have to pay "<<b-(b*100/100)<<endl;
    else if (x=='N'&&a>=2&&a<=10)
    cout<<"\n You have to pay "<<b-(b*50/100)<<endl;
    else if (x=='N'&&a>10)
    cout<<"\n You have to pay "<<b-(b*0/100)<<endl;
    
system ("pause");
return 0;
}
    
    
