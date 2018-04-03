#include <iostream>
using namespace std;
int main()
{
    float u,T;
    int a,b,t;
    cout<<"Enter electricity cost per unit (bahts) : ";
    cin>>u;
    do
    {
           cout<<"Enter last unit : ";
           cin>>b;
            if (b<0)
           {
                    cout<<"-- End of Calculation --"<<endl;
                    cout<<"Total of Electricity charge (bahts) = "<<T<<endl;
                    break;
           }
           cout<<"Enter current unit : ";
           cin>>a;
           t=a-b;
           if (t<0)
           {
                   cout<<"Invalid current unit!"<<endl;
                   continue;
                   }
           cout<<"Units used = "<<t<<endl;
           T=u*t;
           cout<<"Electricity charge (bahts) = "<<T<<endl;
    }while(1);
    system ("pause");
    return 0;
}
