#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int usage,voltage,ECost;
    double cost,us1,us2,us3,Ft,vat,sEcost,service;
    
          
           
    cout<<"Please input usage : ";
    cin>>usage;  
    
     
      if (usage>0) 
      {  
        cout<<"Please input voltage : ";
        cin>>voltage;
    
             if((voltage>=22)&&(voltage<=33))
               {
                 vat=((((2.4649*usage)+228.17+((46.38*usage)/100))*7)/100) ; 
                 Ft=((46.38*usage)/100); 
                 sEcost=(2.4649*usage);  
                 service=228.17;             
                 cout<<"Electricity Cost : "<<sEcost<<endl;
                 cout<<"Service : "<<service<<endl;
                 cout<<"Ft : "<<Ft<<endl; 
                 cout<<"Vat 7% : "<<vat<<endl;                  
                 cost =(sEcost+service+Ft+vat);
                 cout<<"Total cost : "<<round(cost)<<" Baht"<<endl;      
                                                   
              }
           
           else if(voltage<22)
           {    
                   if((ECost>=1)&&(ECost<=150))
                   { 
                                               
                     us1=(1.8047*usage);  
                     Ft= ((46.38*usage)/100); 
                     service=40.90;   
                     vat=((us1+service+Ft)*7)/100;                   
                     cout<<"Electricity Cost 0-150 : "<<us1<<endl;
                     cout<<"Service : "<<service<<endl;
                     cout<<"Ft : "<<Ft<<endl;
                     cout<<"Vat 7% : "<<vat<<endl;
                     cost=(us1+service+Ft+vat);
                     cout<<"Total cost : "<<round(cost)<<" Baht"<<endl;  
                   }
                
                    if((ECost>=151)&&(ECost<=400))
                    {
                      us1=(1.8047*usage);  
                      us2=(2.7781*(usage-150));
                      Ft=((46.38*(us1+us2))/100); 
                      service=40.90;  
                      vat=((us1+us2+service+Ft)*7)/100;        
                      cout<<"Electricity Cost 0-150 : "<<us1<<endl; 
                      cout<<"Electricity Cost 151-400 : "<<us2<<endl;  
                      cout<<"Service : "<<service<<endl;
                      cout<<"Ft : "<<Ft<<endl;
                      cout<<"Vat 7% : "<<vat<<endl;
                      cost=(us1+us2+service+Ft+vat);
                      cout<<"Total cost : "<<round(cost)<<" Baht"<<endl;  
                     
                    }
                    if(ECost>=401)
                    {
                      us1=(1.8047*usage);  
                      us2=(2.7781*(usage-150)); 
                      us3=(2.9780*(usage-400)); 
                      Ft= ((46.38*(us1+us2+us3))/100);     
                      cout<<"Electricity Cost 0-150 : "<<us1<<endl; 
                      cout<<"Electricity Cost 151-400 : "<<us2<<endl; 
                      cout<<"Electricity Cost 401 ->: "<<us3<<endl; 
                      cout<<"Service : 40.90"<<endl;
                      cout<<"Ft : "<<Ft<<endl;
                      cost=(us1+us2+us3+service+Ft+vat);
                      cout<<"Total cost : "<<round(cost)<<" Baht"<<endl;  
                       
                                
                    }
                    
                  
                    
                
                }
           
           
           
           
           
    }      
    else
    cout<<"Invalid Input !!!"<<endl;       
   
     
   
    system("pause");
    return 0;
    
   
    
    
}    
      
