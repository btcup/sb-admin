#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int usage,voltage ;
    double elec1,elec2,elec3,service,vat,Ft,total  ;
    
           cout<<"Please input usage : ";
           cin >>usage;
           if(usage<0)
           {
                      cout<<"Invalid Input !!!\n";
           }
           cout<<"Please input voltage : ";
           cin >>voltage;
           
                         if(voltage>=22)
                         {
                          elec1 = 2.4649 * usage;
                          service = 228.17;
                          Ft = 0.4638 * usage;
                          vat = (elec1+service+Ft)*0.07;
                          total = elec1+service+Ft+vat;
                          cout<<endl;
                          cout<<"Electricity Cost : "<<elec1<<endl;
                         }
                         else if (voltage<22)
                         {    
                          
                          service = 40.90;
                          Ft = 0.4638 * usage;                          
                              cout<<endl;
                              if(usage>=0&&usage<=150)
                              {           elec1 = 1.8047 * usage;
                                          elec2 = 0;
                                          elec3 = 0;
                                          cout<<"Electricity Cost 0-150 : "<<elec1<<endl;
                                          vat = (elec1+service+Ft)*0.07; 
                                          total = elec1+service+Ft+vat;
                              }
                              else if(usage>=151&&usage<=400)
                              {           elec1 = 1.8047 * 150;
                                          elec2 = 2.7781 * (usage-150);
                                          elec3 = 0;
                                          cout<<"Electricity Cost 151-400 : "<<elec2<<endl;
                                          vat = (elec1+elec2+service+Ft)*0.07;
                                          total = elec1+elec2+service+Ft+vat;
                              }
                              else if(usage>=401)                              
                              {           elec1 = 1.8047 * 150;
                                          elec2 = 2.7781 * 250;
                                          elec3 = 2.978 * (usage-400);
                                          cout<<"Electricity Cost 401-> : "<<elec3<<endl;
                                          vat = (elec1+elec2+elec3+service+Ft)*0.07;
                                          total = elec3+elec1+service+Ft+vat+elec2;
                              }
                          
                          
                         }
         cout<<"Service : "<<service<<endl;
         cout<<"Ft : "<<Ft<<endl;
         cout<<"Vat 7% : "<<vat<<endl;
         cout<<endl;
         cout<<"Total cost : "<<ceil(total);
                
    
    
    system("pause");
    return 0;
    
}
