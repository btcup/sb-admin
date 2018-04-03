#include <iostream>
#include <cmath>
using namespace std;
main ()
{
     int a,b,sum;
     char z;
     cin>>z;
     cout<<"Are you number (Y or N):"<<z<<endl;
     cin>>a;
     cout<<"How old are you ? :"<<a<<endl;
     if(z=='Y')
     {
     if (a<=2)
     cin>>b;
     cout<<"Normal price :"<<b<<endl;
     sum=(b*100)/100;
     cout<<"you have to pay"<<sum<<endl;
      else if (a>=2||a<=12)
     cin>>b;
     cout<<"Normal price :"<<b<<endl;
     sum=(b*70)/100;
     cout<<"you have to pay"<<sum<<endl;
     else if(a>12)
     cin>>b;
     cout<<"Normal price :"<<b<<endl;
     sum=(b*50)/100;
     cout<<"you have to pay"<<sum<<endl;
     }
     if(z=='N')
     {
     if(a<2)
     cout<<"Normal price :"<<b<<endl;
     sum=(b*100)/100;
     cout<<"you have to pay"<<sum<<endl;
     else if (a>=2||a<=10)
     cin>>b;
     cout<<"Normal price :"<<b<<endl;
     sum=(b*50)/100;
     cout<<"you have to pay"<<sum<<endl;
     else if (a>10)
     cin>>b;
     cout<<"Normal price :"<<b<<endl;
    cout<<"you have to pay"<<b<<endl;
     
     }
     
     system ("pause");
     return 0;
     }
     
