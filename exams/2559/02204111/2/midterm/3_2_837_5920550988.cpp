//5920550988 Kunyarat Lumsuay
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z,a,b;
    cout<<"Enter electricity cost per unit (bahts):";
    cin>>x;
    while(x>0&&y>0)
    {         cout<<"Enter last unit:";
              cin>>y;
              if(y>0)
              {
                           cout<<"Enter current unit:";
                           cin>>z;
                           if(z>y>=0)
                                  {
                                  a=z-y;
                                  cout<<"Enter used = "<<a<<endl;
                                  b=x*a;
                                  cout<<"Electricity charge (bahts)="<<b<<endl;
                                  }
                           if(y>z)
                                  {
                                  cout<<"Invalid current unit!"<<endl;
                                  }
              }
              if(y<0)
              {
                     cout<<"--End of caculation--"<<endl;
              } 
              b=b;       
               cout<<"Total of Electricity charge (bahts)="<<b++<<endl;    
   }
           
    system("pause");
    return 0;
}
