#include <iostream>                                                             //5920503645  Chotirot Theppayasirikamol
using namespace std;
int main()
{
    char vehicle;
    int total,pay;
    float time,leave;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
    cin>>vehicle;
    if(vehicle=='C'||vehicle=='M')
    {
         cout<<"Arrival time : ";
         cin>>time;
         cout<<"Leave time : ";
         cin>>leave;  
         total=leave-time;
         if(total>0)
         {
              if(vehicle=='C')
              {
                   if(total<=2)
                   { pay=0; }
                   else if(total<=5)
                   { pay=total*30; }
                   else if(total<=8)
                   { pay=total*50; }
                   else 
                   { pay=500; }
              }
         
              if(vehicle=='M')
              {
                   if(total<=3)
                   { pay=0;}
                   else if(total<=7)
                   { pay=total*10; }
                   else 
                   { pay=150; } 
              } 
              cout<<"\nYou have to pay "<<pay<<" bath" <<endl;
         }  
         else
         cout<<"\nYou can't leave before arrival time" <<endl;                     
    }
    else
    cout<<endl;
    system("pause");
    return 0;
}
     
