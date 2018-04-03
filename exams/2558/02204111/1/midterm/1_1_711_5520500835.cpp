#include <iostream>
using namespace std;
int main()
{
    int usage,voltage;
    float x,power,cost,cost1,cost2,service,ft,vat;
    cout<<"please input usage:";
    cin>>usage;
    cout<<"please input voltage:";
    cin>>voltage;
if(usage<0)
  {
  cout<<"invalid input usage!!!";
  }
else if(usage>0)
{               
if(voltage>=22||voltage<=33)
      {                     
       power = 2.4649;
       cost = usage*power ;
       cout<<"cost="<<cost<<endl;
       service=228.17;
       
      }
else if (voltage<=22)
      {
       if(usage>=0||usage<=150)
          {
           power =1.8047;
           cost1 = usage*power;                
       
          }
       if(usage>=151||usage<=400)
          {   
           power =2.7781;
           cost2 = usage*power ;                 
           
          }
         
          cost= cost1+cost2;
          cout<<"cost="<<cost<<endl;
          service=40.90;
      }
else if (voltage>=401)  
      {   
       power=2.9780;
       cost = usage*power;
       cout<<"cost="<<cost<<endl;          
       service=40.90;
      } 
}  
   vat= (cost+service)*0.07;
   cost= cost+service+vat;
   cout<<"Total cost="<<cost;
system("pause");
return 0;
}
