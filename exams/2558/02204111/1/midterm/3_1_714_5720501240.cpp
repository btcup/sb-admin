#include <iostream>
#include <cmath>
using namespace std;
int main()
{
      int c,d;
      char a;
      cout<<"Are you member (Y or N): ";
      cin>>a;
      cout<<"How old are you?: ";
      cin>>c;
      cout<<"Normal price: ";
      cin>>d;
      if (a=='Y')
      {if (c>=2&&c<=12)
      cout<<"You have to pay "<<d*30/100<<endl;
      else if (c>12)
      cout<<"You have to pay "<<d*50/100<<endl;
      else
      cout<<"You have to pay 0"<<endl;
      }
      else if (a=='N')
      {if (c>=2&&c<=10)
      cout<<"You have to pay "<<d*50/100<<endl;
      else if (c>10)
      cout<<"You have to pay "<<d<<endl;
      else
      cout<<"You have to pay 0"<<endl;
      }
system ("pause");
return 0;
}
