#include <iostream>
using namespace std;
int main()
{
    float u,vol,a=228.17,b=40.9 ,Ft=60.294, K=42.62307;
    float Q , power;
    int Service;
    
         do{
                cout<<"Please input usage : " ;
                cin>> u;
                cout<<"Please input voltage : " ;
                cin>> vol;
                if(Q>=22||Q<=23){
                      
                                                    Service=((u*2.4649)+228.17+(46.38*u)+(u*0.7))*0.1;
                                }
                if(Q<22||Q>0)
                                 if(Q>=0||Q<=150)   Service=((u*1.8047)+40.90 +(46.38*u)+(u*0.7))*0.1;
                                 u=u*2.4649;
                                 if(Q>=151||Q<=400) Service=((u*2.7781)+40.90 +(46.38*u)+(u*0.7))*0.1;
                                 u=u*1.8047;
                                 if(Q>=401)         Service=((u*2.9780)+40.90 +(46.38*u)+(u*0.7))*0.1;  
                                 
                        cout<<"Electricity Cost : "<< u<< endl; // true
                        cout<<"Service : "<<a<<endl;
                        cout<<"Ft : "<<Ft<<endl;
                        cout<<"Vat 7% : "<<K<<endl;
                                        
                                
                      
                        
                        cout<<"Total cost : "<<Service<<endl;
                        
                        
                
                
            }
          while(Q<=0);
          if(Q=-1){
          cout<<" Invalide Input !!!";
                  }
          
          system ("pause");
          return 0;
          }
    
    

