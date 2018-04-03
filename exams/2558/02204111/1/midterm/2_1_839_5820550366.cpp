#include<iostream>
using namespace std;

int main()
{ 
     char w,x,y,z;
     int a;
     cout<<"welcome to A cup-with-love Coffee!!"<<endl;
     cout<<"Enter your menu (E/A/L/C/M): ";
     cin>>x;
     cout<<"Enter size(S/T/G/V): ";
     cin>>y;
     cout<<"How many cups?: ";
     cin>>a;
     cout<<"Do you want other menu? (Y/N): ";
     cin>>z;
     
     if(x=='e'||x=='E')
           {
              if(y=='t'||y=='T')
                 {
                     if(z=='y'||z=='Y')
                        {
                        }
                     else if(z=='n'||z=='N')
                        {  
                          cout<<"Are you a member?(Y/N): ";
                          cin>>w; 
                             if(w=='y'||w=='Y')
                             {  
                                  cout<<"Total ";
                             } 
                        }   
                 } 
           
           }        
    
    
    
    
    
    
    
    
  system("pause");
  return 0 ;  
      
}
