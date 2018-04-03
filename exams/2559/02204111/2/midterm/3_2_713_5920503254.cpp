//5920503254 Sornchanok Pranudomrat
#include<iostream>
using namespace std;
int main()
{
    double a;
    int b,c,d,e;
    cout<<"Enter electricity cost per unit(bahts): ";
    cin>>a;
    while(a<1)
    {
    cout<<"Enter electricity cost per unit(bahts): ";
    cin>>a;      
              }
    while(a>=1)
    {    
              cout<<"Enter last unit: ";
              cin>>b;
              cout<<"Enter current unit: ";
              cin>>c;
              if(b>=0&&c>=0)
           {
              d=c-b;
              if(d>=0)
              {
                 cout<<"units used= "<<d<<endl;
                 cout<<"Electricity charge(bahts)= "<<d*a<<endl;
              
              } 
              else 
              cout<<"Invalid current unit!"<<endl;
            
           }
              else 
              cout<<"Invalid current unit!"<<endl;

    }
    cout<<"--End of Calculation--"<<endl;
    cout<<"Total of Electricity charge (bahts)= "<<b;
    
system("pause");
return 0;
}
