//5620503895 Phutthaphong Phongsukwetchakun
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
         char OBJ,type;
         float build,age,rate,value;
         cout<<"Enter Objective(Utilization):";
         cin>>OBJ;
         cout<<"Enter Utilization type (Business,Agriculture):";  
         cin>>type;
         if(OBJ=='U')
         {
             cout<<"Enter land cost (million)";  
             cin>>value;
             cout<<"Enter building cost (million)";  
             cin>>build;
             cout<<"Building age";  
             cin>>age;
                     if(type=='B')
                     {
                                  if(value<20)
                                  rate=0.3;
                                  if(value>=20&&value<50)
                                  rate=0.5;
                                  if(value>50)
                                  rate=0.7;                                                                                
                     }
                     if(type=='A')
                     {
                                  if(value<30)
                                  rate=0;
                                  if(value>=30&&value<60)
                                  rate=0.06;
                                  if(value>60)
                                  rate=0.12;             
                                                  
                     }                  
                     //cout<<"Your estate cost is "<<    <<"million bath";
                     //cout<<"The land tax is "<<   <<"million bath";                                                   
                     }
         if(OBJ=='W')
         {
         cout<<"Enter land cost (million)";  
           cin>>land;
         cout<<"Building age";  
             cin>>age;
             if()
             {
                 
             }
                       
         }
         
system("pause");
return 0;      
}
