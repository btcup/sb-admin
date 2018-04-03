// 5920550406 Sirichai Phattharaketanan
#include<iostream>
using namespace std;
int main()
{
    char x;
    float land;
    cout<<"Enter objective (Living, Agriculture) :";
    cin>>x;
    if(x=='L')
    {
              cout<<"Enter living type (Main, Second): ";
              cin>>x;
              if(x=='M')
                        {
                        cout<<"Enter land cost (million)";
                        cin>>land;
                         if(land<50)    
                         {
                         }
                         if(land==50||land<100)
                         {
                         }
                         if(land>100)
                         {           
                         }
                        }
              if(x=='S')
                        {
                        cout<<"Enter land cost (million)";
                        cin>>land;
                         if(land<5)    
                         {
                         }
                         if(land==5||land<10)
                         {
                         }
                         if(land>10)
                         {           
                         }
                        }
                                                             
    }                                                         
    if(x=='A')
    {  
                        cout<<"Enter land cost (million)";
                        cin>>land;                                
                         if(land<40)    
                         {
                         }
                         if(land==40||land<80)
                         {
                         }
                         if(land>80)
                         {           
                         }
                                
    } 
system ("pause");
return 0;    
}
