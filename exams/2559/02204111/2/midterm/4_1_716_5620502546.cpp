#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char name;
    float arrival,leave,x,y;
    cout<<"Type of vehicle ((c)Car or (M)Motorcycle): "; 
    cin>>name;
    cout<<"Arrival time : "; 
    cin>>arrival;
    cout<<"Leave time: ";
    cin>>leave;
    if(name=='C')
    {
     x=leave-arrival;
     cout<<x<<"hourse and"<<x<<"minutes";
     if(x<=2)
     {
             x==x;
             cout<<"You have to pay "<<x<<"bath";
     }
     else if(x<=3||x<=5)
     {
             x=x*30;
             cout<<"You have to pay "<<x<<"bath";
     }
     else if(x<=6||x<=8)
     {
             x=x*50;
             cout<<"You have to pay "<<x<<"bath";
     }
     else if(x>8)
     {
             x=500;
             cout<<"You have to pay "<<x<<"bath";
     }
        
    }
    if(name=='M')
    {
     x=leave-arrival;
     cout<<x<<"hourse and"<<x<<"minutes";
     if(y<=3)
     {
             x==x;
             cout<<"You have to pay "<<x<<"bath";
     }
     else if(x<=4||x<=7)
     {
             x=x*10;
             cout<<"You have to pay "<<x<<"bath";
     }
     else if(x>7)
     {
             x=150;
             cout<<"You have to pay "<<x<<"bath";
     }
         else
    {
       cout<<"you can't leave before arrival time";  
    }
    
    }
   
      
    system("pause");
    return 0;
}
