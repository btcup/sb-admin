//5920501740 sirinapa kanenok

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char vehicle;
    int z,total;
    float arrival,leave,x;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
    cin>>vehicle;
    cout<<"Arrival time: ";
    cin>>arrival;
    cout<<"Leave time: ";
    cin>>leave;
    if (vehicle=='C')
   {  
       total=leave-arrival;
       x=(total*100)%100<=60;
       cout<<int(total)<<"hours and "<<x<<"minutes"<<endl; 
       if(total>=3 || total<=5)
       z = ceil(total)*30;
       if(total>=6 || total<=8)
       z = ceil(total)*50; 
       if(total>8)
       z = 500;         
    cout<<"You have to pay "<<z<<"bath"<<endl;
      }    
    if (vehicle=='M')
    {
       total=leave-arrival;
        x=(total*100)%100<=60;
       cout<<int(total)<<"hours and"<<x<<"minutes"<<endl;    
      if(total<=3)
      cout<<"You have to pay 0 bath"<<endl;
      else if(total>=4 || total<=7)
       {z =ceil(total)*10; 
       cout<<"You have to pay "<<z<<"bath"<<endl;
       }
       else if(total>7)
       {z = 150; 
       cout<<"You have to pay "<<z<<"bath"<<endl;}
       else if(total<0)
       cout<<"You can't leave before arrival time"<<endl; 
      
          }
   
system("pause");
return 0;
}
