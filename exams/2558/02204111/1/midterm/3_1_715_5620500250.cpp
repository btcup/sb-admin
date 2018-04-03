#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<< "Are you member (Y or n) :"<<" ";
    cin>> a;
    
    int b,c,e;
    cout<<"How  old are you?:"<<" ";
    cin>> b;
    cout<<"Normal  price :"<<" ";
    cin>> c;
    
    if(a=='Y')
                      {
                            if(b<2)
                                                  {
                                                     
                                                  e=c*0;
                                                  cout<<endl;
                                                  cout<<"You have to pay"<<" "<<e<<endl;
                                                      
                                                        
                                                        
                                                  }
                            else if (b>=2&&b<=12)
                                                 {
                                                  e=(c*0.7);
                                                  cout<<endl;
                                                 cout<< "You have to pay"<<" "<<e<<endl;
                                                 }
                            else if (b>12)
                                                 {
                                                 e=c*0.5;
                                                 cout<<endl;
                                                 cout<< "You have to pay"<<" "<<e<<endl;
                                                 }
                            
                              
                               
                      }
                      
                            
    else
           {
                            if(b<2)
                                               {
                                                         e=c*0;
                                                         cout<<endl;
                                                        cout<<"You have to pay"<<" "<<e<<endl;
                                                        
                                                        
                                                  }
                            else if (b>=2&&b<=10)
                                                 {
                                                        e=c*0.5;
                                                 cout<< "You have to pay"<<" "<<e<<endl;
                                                 }
                            else if (b>10)
                                                 {
                                                    e=c*0.5;
                                                 cout<< "You have to pay"<<" "<<e<<endl;
                                                 }
                            
                             
                                                 
                               
                      }
                         
        
                                            
                                       
                                                          
                      
    
    
         
    
                      
system ("pause");
return 0;
} 
