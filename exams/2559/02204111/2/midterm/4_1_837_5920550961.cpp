#include<iostream> \\5920550961 Kasiyapat Praditkitkul
#include<cmath>
using namespace std;
int main()
{
    char Type;
    float Arrival,Leave,tot,ans,bath;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
    cin>>Type;
    cout<<"Arrival time : ";
    cin>>Arrival;
    cout<<"Leave time : ";
    cin>>Leave;
    cout<<endl;
    
    tot=Leave-Arrival;
    ans=tot+0;
    if(tot+0.60>ans)
   
    if(tot>0){
    cout<<floor(tot)<<" hours and "<<"minutes"<<endl;
    tot=ceil(tot);
       if(Type=='C')
       {        
          if(tot<=2)
          bath=0 ;
          if(tot<=5)
          bath=tot*30;
          else if(tot<=8)
          bath=tot*50;
          else
          bath=500;
       }   
       else if(Type=='M')
       {         
          if(tot<=3)
          bath=0 ;
          else if(tot<=7)
          bath=tot*10;
          else
          bath=150;
       }
    cout<<"You have to pay "<<bath<<" bath"<<endl; 
     }
    else{
    cout<<"You can't leave before arrival time"<<endl;
    }            
    
    
    
    system("pause");
    return 0;
}    
    
