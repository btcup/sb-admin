//5920551836 Peeranat Passananon
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double electricity;
    
    int unit,lastunit,unitcurrent;
    
    cout<<"Enter electricity cost per unit (baths) : ";
    cin>>electricity;
    while(electricity == 0 || electricity <= 0 )
    {
                   cout<<"Enter electricity cost per unit (baths) : ";
                   cin>>electricity;
    }
    do
    {
    cout<<"Enter last unit : ";
    cin>>lastunit;
    
     
         
         
    cout<<"Enter current unit : ";
    cin>>unitcurrent;
    
    
    if(lastunit < 0 && lastunit > unitcurrent )
    {
               cout<<"Invalid last unit !";
               
               }
               
   else if (lastunit == -1)
    {
         cout<<"-- End of Calculation -- ";
        
         }
}while (lastunit == -1);
    
               
    cout<<"Unit used : "<<unitcurrent - lastunit<<endl;
    cout<<"Electricity charage (baths) = "<< (unitcurrent - lastunit)*electricity<<endl;
    
    
    
    
    
     system("pause");
    return 0 ;
    
    
    
    
    

    }
