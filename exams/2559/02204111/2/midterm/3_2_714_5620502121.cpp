//5620502121 Rachaha Lalitpattarakit 

#include<iostream>
using namespace std;
int main() 
{
    int unit=0,unit2,use,sum;
    double bath,charge;    //bath per unit
    cout<<"Enter electricity cost per unit(baths): ";
    cin>>bath;
   while(unit!=-1)
{       
        if(unit>=100000) return 0;
            else {cout<<"Enter last unit";
        cin>>unit; cout<<"Enter current unit: "; cin>>unit2;
        sum=unit2-unit ; cout<<"Unit used = "<<sum<<endl;
        charge=bath*sum; cout<<"Electricity charge (baths) =  "<<charge<<endl;}
        
           
        
        
        
        
}
  
    
    
    
    
    
    
    
    
    
    
    
    
    

system("pause");
return 0;


}
