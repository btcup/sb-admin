#include<iostream>
using namespace std;
int main (){
    double usage,voltage,total,cost,ft,vat,cost1,cost2,cost3,total2,total1,vat1,vat2,vat3,vatt,t1,t2,t3,tt;
    
    cout<<"Please input usage : ";
    cin>>usage;
    if (usage<0){
                 cout<<"Invalid Input !!! "<<endl;
                 }
    else if (usage>0){
    cout<<"Please input voltage : ";
    cin>>voltage;
    cout<<"\n";
    cout<<"\n";
    
    if(voltage>=22&&voltage<=33){
                                 cost=usage*2.4649;
                                 ft=(46.38*usage)/100;
                                 vat=(cost+228.17+ft)*7/100;
                                 total=cost+228.17+ft+vat;
                                 cout<<"Electric Cost : "<<cost<<endl;
                                 cout<<"Service : 228.17"<<endl;
                                 cout<<"Ft : "<<ft<<endl;
                                 cout<<"Vat 7% : "<<vat<<endl;
                                 cout<<"Total cost : "<<total<<endl;
                                 }
    else if(voltage>0 && voltage<=21){
         cost1=150*1.8047;
         
         
                         if(usage<=150){
                                       
                                       cout<<"Electric Cost 0-150 : "<<cost1<<endl;
                                       vat1=(cost+40.90+ft)*7/100;
                                       t1=cost1+40.90+ft+vat;
                                       }
                        
                        else if (usage>150&&usage<=400){
                                                          
                                                          cost2=(usage-150)*2.7781;
                                                          cout<<"Electric Cost 0-150 : "<<cost1<<endl;
                                                          cout<<"Electric Cost 151-400 : "<<cost2<<endl;
                                                         total1=cost1+cost2;
                                                         vat2=(total1+40.90+ft)*7/100;
                                                         t2=cost1+cost2+40.90+ft+vat;        
                                                  }
                        
                                                      
                        else if (usage>400){
                                            cost2=(usage-150)*2.7781;
                                            cost3=(usage-400)*2.9780;
                                            cout<<"Electric Cost 0-150 : "<<cost1<<endl;
                                            cout<<"Electric Cost 151-400 : "<<cost2<<endl;
                                            cout<<"Electric Cost 401 -> : "<<cost3<<endl;
                                            total2=cost1+cost2+cost3;
                                            vat3=(total2+40.90+ft)*7/100; 
                                            t3=cost1+cost2+cost3+40.90+ft+vat;        
                                            }
                                            
                                             
                         ft=(46.38*usage)/100;
                                         
                         cout<<"Service : 40.90"<<endl;
                         cout<<"Ft : "<<ft<<endl;
                         cout<<"Vat 7% : "<<vatt<<endl;
                         
                        tt=t1+t2+t3;
                        cout<<"Total cost : "<<total<<endl;
                        }
                        
}
                        
    system ("pause");
    return 0;
    }
