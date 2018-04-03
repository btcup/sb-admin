#include<iostream>
using namespace std;
int main()
{
  double z,q,w,e,r;  
  char name,y;
  cout<<"-------Car lease calculator---------"<<endl;
  cout<<"Enter car model:";
  cin>>name;
  cout<<"Enter number of years (1-6):";
  cin>>y;
  cout<<"Enter percentage of down payment:";
  cin>>z;
  q=1385000-1385000*(z/100);
  w=511500-511500*(z/100);
  e=738000-738000*(z/100);
  r=694000-694000*(z/100);
  if(name=='A'){
    cout<<"Financing amount:"<<q<<endl;
    
    
    
    
    
  else if(name=='B')
    cout<<"Financing amount:"<<w<<endl;
  else if(name=='C')
    cout<<"Financing amount:"<<e<<endl;
  else if(name=='J')
    cout<<"Financing amount:"<<r<<endl; 
   
  
  
  
       
  
     
    
    
 system("pause");
 return 0;   
}
