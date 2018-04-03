//5820551214 Thanapluet Sinlapacharoen 
#include<iostream>
using namespace std;
int main()
{
    char type;
    double arrival,leave,total;
    
    
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
    cin>>type ;
    
    cout<<"Arrival time : ";
    cin>>arrival;
    cout<<"Leave time : ";
    cin>>leave;
    
    if(total=(leave-arrival)<=3)
    {
                          cout<<total<<" hours and "<<"10 minutes"<<endl;
                          cout<<"You have to pay o bath";
                          cout<<endl;
}
system ("pause");
 return 0;
}
    
     
