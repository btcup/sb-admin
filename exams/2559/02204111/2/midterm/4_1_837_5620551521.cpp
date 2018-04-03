//5620551521_Siriwan_Srisamut
#include <iostream>
using namespace std;
int main ()
{
    char C , M;
    float minute,hours;
    
      
    
    if(C<=2||M<=3)
    {
    
    cout<<("Arrival time:");
    cin>>hours>>minute;
    cout<<("Leave time:") 
    cin>>hours>>minute;
    cout<<("You have to pay 0 bath");
    cin>>hours>>minute>>()*0;
    
    else if(C>=3||C<=5)
    cout<<("Arrival time:");
    cin>>hours>>minute;
    cout<<("Leave time:") 
    cin>>hours>>minute;
    cout<<("You have to pay  bath");
    cin>>hours>>minute>>()*30;
    
   
    else if(M>=4||M<=7)
    cout<<("Arrival time:");
    cin>>hours>>minute;
    cout<<("Leave time:") 
    cin>>hours>>minute;
    cout<<("You have to pay  bath");
    cin>>hours>>minute>>()*10;
    
    else if(C>=6||C<=8)
    cout<<("Arrival time:");
    cin>>hours>>minute;
    cout<<("Leave time:") 
    cin>>hours>>minute;
    cout<<("You have to pay  bath");
    cin>>hours>>minute>>()*50;
    
    else if(M>7)
    cout<<("Arrival time:");
    cin>>hours>>minute;
    cout<<("Leave time:") 
    cin>>hours>>minute;
    cout<<("You have to pay 150 bath");
   
    
    else if(C>8)
    cout<<("Arrival time:");
    cin>>hours>>minute;
    cout<<("Leave time:") 
    cin>>hours>>minute;
    cout<<("You have to pay 500 bath");
    
}
else ()
    system("pause");
    return 0;
}
    
