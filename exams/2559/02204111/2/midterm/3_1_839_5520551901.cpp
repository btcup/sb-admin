// 5520551901 Sumeth Nareepapjaroen

#include <iostream>
using namespace std;
int main()
{
  
    double a,b,e,d;
    int c;
    cout << "Arrival time :" ;
    cin >> a;
    cout << "Leave time :";
    cin >> b;
    
    if (a>b)
    {
      cout << "You can't leave before arrival time"<<endl ;
    }
    
    else
    {     
       
        if (a<b) 
        { 
          c=b-a;  
          d=((b-a)-c)*100; 
        cout << c << " hours and "  << d << " minutes"<<endl;   
        }
         
         if (c<3&&d<15)
         e=0;
         else if (c<6&&d<15)
         e=c*20;
         else if (c<8&&d<15)
         e=c*50;
         else if (c>8&&d>=0)
         e=500;
         cout << "You have to pay " << e << "bath"<<endl;
         
         }
    system ("pause");     
    return 0;
}    
