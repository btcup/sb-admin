//5720551743 Pornmarie Chantasard
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   char x;
   float arrival;
   float leave;
    cout<<"Type of vehicle ((c)Car or (M)Motorcycle) :";
    cin>>x;
    cout<<"Arrival time :";
    cin>>arrival;
    cout<<"Leave time :";
    cin>>leave;
    
    if(x=='c','C' && leave-arrival<2);
    {cout<<round(leave-arrival)<<"hours"<<endl;
     cout<<"You have to pay o bath"<<endl;
     }
    if(x=='c','C' && leave-arrival>2);
      if(leave-arrival<5);
     {
      cout<<round(leave-arrival)<<"hours"<<endl;
      cout<<"You have to pay"<<(round(leave-arrival))*30<< "bath"<<endl;
     }
     if(x=='c','C' && leave-arrival<5);
      if(leave-arrival>8);
      {
      cout<<round(leave-arrival)<<"hours"<<endl;
      cout<<"You have to pay"<<(round(leave-arrival))*50<< "bath"<<endl;
      }
     if(x=='c','C' && leave-arrival>8);
      {
      cout<<round(leave-arrival)<<"hours"<<endl;
      cout<<"You have to pay"<<500<<"bath"<<endl;
      }
      if(x=='c','C' && leave<arrival);
      {
      cout<<"You can't leave before arrival time"<<endl;
      }
      
      
      if(x=='m','M' && leave-arrival<3);
    {cout<<round(leave-arrival)<<"hours"<<endl;
     cout<<"You have to pay o bath"<<endl;
     }
     if(x=='m','M' && leave-arrival>4);
      if(leave-arrival<7);
     {
      cout<<round(leave-arrival)<<"hours"<<endl;
      cout<<"You have to pay"<<(round(leave-arrival))*10<< "bath"<<endl;
     }
     if(x=='m','M' && leave-arrival>7);
      {
      cout<<round(leave-arrival)<<"hours"<<endl;
      cout<<"You have to pay 150 bath"<<endl;
      }
      if(x=='m','M' && leave<arrival);
      {
      cout<<"You can't leave before arrival time"<<endl;
      }
      while(x!='c','C','m','M');
system ("pause");
return 0 ;
}


    
