//5720551352 Natchaya Pormahathammakij
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   float x;
   int y,z;
   double sum=0,sum1=0;
   cout<<"Enter electricity cost per unit (baths) :"<<endl;
   cin>>x;
   if(x>0)
   {
         cout<<"Enter last unit :"<<endl;
         cin>>y;  
         if(y>=0||y<100000)
         {  
              cout<<"Enter current unit :"<<endl;
              cin>>z;
              if(y<z||z<100000)
              cout<<"Units used ="<<(z-y)<<endl;
              sum=x*(z-y);
              cout<<"Electricity charge (baths) ="<<sum<<endl;
              sum1=sum++;
              cout<<"Total of Electricity charge (baths) ="<<sum1<<endl;
              if(z=-1) 
              cout<<"-- End of Calculation --"<<endl; 
              else 
              cout<<"Invalid current unit!"<<endl; 
         }
         else if(y=-1)
         {
              cout<<"-- End of Calculation --"<<endl;
         }
         else
         {     
              cout<<"Invalid last unit"<<endl; 
         }
        
   }
   else 
   cout<<"Enter electricity cost per unit (baths) :"<<endl;           
               
         
         
                
         
          
    
    system("pause");
    return 0;
}        
