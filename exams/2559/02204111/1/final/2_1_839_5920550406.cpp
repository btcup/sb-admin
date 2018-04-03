//5920550406Sirichai Phattharaketanan
#include<iostream>
using namespace std;
int main()
{
    int M;
    int i,j;
    int x;
    cout<<"Please in put M: ";
    cin>>M;
    cout<<"Please in put A: "<<endl;
    for(i=0;i<M;i++)
    {                
         for(j=0;j<M;j++)
         cin>>x;           
          if(0<x<100)
         {
    cout<<"Wrong input !!"<<endl;
    cout<<"End program."<<endl;
    break; }
    }
    cout<<"Please in put B: "<<endl;  
    for(i=0;i<M;i++)
    {
         for(j=0;j<M;j++)
         {
         cin>>x;
         }
         
         
         
    }
   

 

 
return 0; 
}  
