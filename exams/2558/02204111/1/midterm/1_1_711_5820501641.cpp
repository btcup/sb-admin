#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float usage,voltage,cost,service,ft,vat,a,b,c;
    cout<<"Please input usage: ";
    cin>>usage;

    if(usage>=0)
    {
                    cout<<"Please input voltage: ";
                    cin>>voltage;
                    cout<<endl;
                    
                    ft=usage*46.38/100;
                if(voltage>=22&&voltage<=33)
                {
                              service=228.17;              
                              cost=usage*2.469;
                              cout<<"Electricity Cost : "<<cost<<endl;
                              cout<<"Service : "<<service<<endl;
                              cout<<"Ft : "<<ft<<endl;
                              vat=(cost+service+ft)*0.07;
                              cout<<"Vat 7% : "<<vat<<endl;
                              cout<<endl;
                              cout<<"Total cost : "<<round(cost+service+ft+vat)<<" Baht"<<endl;
                              
                }
                if(voltage<22)
                {
                              service=40.90;
                              if(usage>=0&&usage<=150)
                              {
                                         cost=usage*1.8047;
                                         cout<<"Electricity Cost 0-150 : "<<cost<<endl;  
                                         cout<<"Service : "<<service<<endl;
                                         cout<<"Ft : "<<ft<<endl;
                                         cout<<"Vat 7% : "<<(cost+service+ft)*0.07<<endl;
                                         cout<<endl;
                                         cout<<"Total cost : "<<round(cost+service+ft+vat)<<" Baht"<<endl;
                                                        
                              }
                              if(usage>=151&&usage<=400)
                              {
                                         cout<<"Electricity Cost 0-150 : 270.705"<<endl; 
                                         cout<<"Electricity Cost 151-400: "<<(usage-150)*2.7781<<endl;  
                                         cost=270.705+(usage-105)*2.7781;
                                         cout<<"Service : "<<service<<endl;
                                         cout<<"Ft : "<<ft<<endl;
                                         cout<<"Vat 7% : "<<(cost+service+ft)*0.07<<endl; 
                                         cout<<endl;
                                         cout<<"Total cost : "<<round(cost+service+ft+vat)<<" Baht"<<endl;             
                              }
                              if(usage>=401)
                              {
                                         cout<<"Electricity Cost 0-150 : 270.705"<<endl; 
                                         cout<<"Electricity Cost 151-400: 694.525"<<endl;  
                                         cout<<"Electricity Cost 401 -> : "<<(usage-400)*2.9780<<endl;
                                         cost=270.705+694.525+(usage-400)*2.9780;
                                         cout<<"Service : "<<service<<endl;
                                         cout<<"Ft : "<<ft<<endl;
                                         cout<<"Vat 7% : "<<(cost+service+ft)*0.07<<endl; 
                                         cout<<endl;
                                         cout<<"Total cost : "<<round(cost+service+ft+vat)<<" Baht"<<endl;
                              }
                }
     
    }
    else 
         cout<<"Invalid Input !!!"<<endl;

    system("pause");
    return 0;
}
