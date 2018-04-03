#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int i,j;
  do
  {
   cout<<"Please input usage : ";cin>>i;
                 if(i<0)
                 {
                  cout<<"Invalid Input !!!"<<endl;
                  break;
                 }
                 
   cout<<"Please input voltage : ";cin>>j;
}
   while(j<0);
   
     
     if(i>0)
     {
            if(j>=22&&j<=33)
            {
                 cout<<"Elactriccity Cost : "<<(i*2.4649)<<endl;
                 cout<<"Service : 228.17"<<endl;
                 cout<<"Ft : "<<i*0.4638<<endl;
                 cout<<"Vat 7% : "<<((i*2.4649)+228.17+(i*0.4638))*0.07<<endl;
                 cout<<"Total cost : "<<((i*2.4649)+228.17+(i*0.4638))*1.07<<endl;
                 }
            else if(j<22)
            {
                 if(i>0&&i<=150)
                 {
                 cout<<"Elactriccity Cost : "<<(i*1.8047)<<endl;
                 cout<<"Service : 40.90"<<endl;
                 cout<<"Ft :"<<i*0.4638<<endl;
                 cout<<"Vat 7%"<<((i*1.8047)+40.90+(i*0.4638))*0.07<<endl;
                 cout<<"Total cost :"<<((i*1.8047)+40.90+(i*0.4638))*1.07<<endl;
                 }
                 else if ()
                 
                 }
            
            }
  
    
    system ("pause");
    return 0 ;
    
    }
