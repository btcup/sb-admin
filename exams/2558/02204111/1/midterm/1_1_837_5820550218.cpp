#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    
    float usage,voltage,cost,service,Ft,Vat,a=-1,Total;
    while(true)
{
               cout<<"Please input usage :" ;
               cin>>usage;
               if(usage==a)
{
               cout<<"Invalid Input !!!"<<endl;break;
                             
}
               cout<<"Please in put voltage :";
               cin>>voltage;
    
    
               if(cost >=0 && cost <=150)
               {
                   if(voltage >22 && voltage<=33)
                   {
                        
                        cost= usage*2.4649;
                        service=228.17  ;
                        Ft=(46.38*usage)/100;
                        Vat=float(cost+service+Ft)*0.070;
                        Total=ceil(cost+228.17+Ft+Vat);
                         
                           
                   }
                    else if(voltage <22)
                   {
                        
                        cost= usage*1.8047;
                        service=40.90  ;
                        Ft=(46.38*usage)/100;
                        Vat=(cost+service+Ft)*0.070;
                        Total=ceil(cost+40.90+Ft+Vat);
                        }
                   
                   
                   
                        
               }
                 
                 
              
                 
                 
                 
                
                 
                 

                 
     
     
     
     
     
     
     
     cout<<"Electricity Cost :"<<cost<<endl;
     cout<<"Service :"<<service<<endl;
     cout<<"Ft :"<<Ft<<endl;
     cout<<"Vat 7 % :"<<Vat<<endl;
     cout<<endl;
     cout<<"Total cost :"<<Total<<"baht"<<" "<<endl;
     
    

}
system("pause");
return 0;
}
