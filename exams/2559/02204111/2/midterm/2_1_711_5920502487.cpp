//  5920502487  pipat pingpol 
#include <iostream>
using namespace std;
int main ()
{
      float  s,y,x,z,k,sum,F,A,Mo,K;
    char m;
    cout<<"------Car lease calculator---"<<endl;
    cout<<"Enter car model :";
    cin>>m;
    cout<<"Enter of year (1-6)";
    cin>>y;
    cout<<"Enter your salary :";
    cin>>s;
    K=y*12;
                            if(m=='A')
                            {
                              sum=138500*0.25 ;       
                              F=138500-sum;  
                              cout<<"Financing amount :"<<F<<endl;
                              A=F*(0.0209)*y;        
                              cout<<"Amount of interest   :"<<A<<endl;
                              Mo=(F+A)/K;   
                              cout<<"Monthly payment:"<<Mo<<endl;        
                               if(s/Mo<=2)
                              {
                                       cout<<"The monthly payment is over than 50% of your salary:";
                              }
                              else
                              {
                                  cout<<"Good decision , Enjoy your new car";
                              }
                            } 
                            if(m=='B')
                            {
                              sum=511500*0.25 ;         
                              F=511500-sum;  
                              cout<<"Financing amount :"<<F<<endl;
                              A=F*(0.0179)*y;        
                              cout<<"Amount of interest   :"<<A<<endl;
                              Mo=(F+A)/K;   
                              cout<<"Monthly payment:"<<Mo<<endl;        
                              if(s/Mo<=2)
                              {
                                       cout<<"The monthly payment is over than 50% of your salary:";
                              }
                              else
                              {
                                  cout<<"Good decision , Enjoy your new car";
                              } 
                            }
                            if(m=='C')
                            {
                              sum=738000*0.25  ;
                              F=738000-sum;  
                              cout<<"Financing amount :"<<F<<endl;
                              A=F*(0.0199)*y;        
                              cout<<"Amount of interest   :"<<A<<endl;
                              Mo=(F+A)/K;   
                              cout<<"Monthly payment:"<<Mo<<endl;        
                              if(s/Mo<=2)
                              {
                                       cout<<"The monthly payment is over than 50% of your salary:";
                              }
                              else
                              {
                                  cout<<"Good decision , Enjoy your new car";
                              } 
                            }   
                             
                            if(m=='J')
                            {
                               sum=694000*0.25;         
                              F=694000-sum;  
                              cout<<"Financing amount :"<<F<<endl;
                              A=F*(0.0199)*y;        
                              cout<<"Amount of interest   :"<<A<<endl;
                              Mo=(F+A)/K;   
                              cout<<"Monthly payment:"<<Mo<<"Mo"<< Mo/s <<endl;        
                              if(s/Mo<=2)
                              {
                                       cout<<"The monthly payment is over than 50% of your salary:";
                              }
                              else
                              {
                                  cout<<"Good decision , Enjoy your new car";
                              }     
                            }            
                    
                            
                            
                            
                            
              
    

      system ("pause");
      
       return 0;
       }


       
      
     
  
