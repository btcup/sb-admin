//5920503572 Sakkarin Srisuwan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,d,e,sum=0;
    do{
    cout<<"Enter electricity cost per unit (baths) : "; cin>>a;
    if(a>0)
    {
    do{
                 cout<<"Enter last unit: "; cin>>b;
                 if(b==-1)
                    break;
                 if(b/100000<1&&b>=0)
                 {
                               cout<<"Enter current unit: "; cin>>c;
                               if(c==-1)
                                  break;
                               if(c>b)
                               {
                                      d=c-b;
                                      e=a*d;
                                      cout<<"Units used = "<<d<<endl;
                                      cout<<"Electricity charge (baths) = "<<e<<endl;
                                      sum=sum+e;
                               }
                               else
                               cout<<"Invalid current unit!"<<endl;
                 }else
                 cout<<"Invalid last unit!"<<endl; 
                 cout<<endl;
    }while(b!=-1);
   } else;
}while(a<0);
    cout<<"--End of Caculation--"<<endl;
    cout<<"Total of Electricity charge (baths) = "<<sum<<endl;          
    system("pause");
    return 0;
}
