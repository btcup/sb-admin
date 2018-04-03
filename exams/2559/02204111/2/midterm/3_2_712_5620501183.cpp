#include <iostream>           //5620501183  wilawun ponprachanuwut
using namespace std;
int main ()
{
    float a,b,c,d;
    
    do
    {
     cout<<"Enter eletricity coast per unit (bath) : ";
     cin>>a;
    }while (a<=0);
    
    cout<<endl;
  
    do
    {
                          
          cout<<"Enter last unit : ";
          cin>>b;
          cout<<"Enter current unit : ";
          cin>>c;
          cout<<endl;
    }while (b>c);

          c=c-b;
          cout<<"unit used = "<<c<<endl;
          d=c*a;
          cout<<"Electricity charge (bahts) = "<<d;
          cout<<endl;
    
     
     cout<<"-- End of calculation --"<<endl;
     cout<<endl;
     cout<<"Total of Electricity charge (bahts) = "<<endl;

    system ("pause");
    return 0;
}
