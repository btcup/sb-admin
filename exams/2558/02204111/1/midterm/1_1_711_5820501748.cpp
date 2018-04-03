#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,b1,b2,b3,c,d,e,f,g,h,i,j;
    cout<<"Please input usage :"<<endl;
    cin>>a;
    
    cout<<"Please input voltage:"<<endl;
    cin>>b;
    if(a>=22)
    {c=a*2.4649;}
   // else 
         //{
               // if(a<150)
              //  b1=a*1.8047
              //  else if((a>=150)||(a<=400))
              //  b2=a*2.7781
              //  else
              //  b3=a*2.9780
                
                
  //  if(a>0)
  //  cout<<"Electricity Cost 0-150:"<<c<<endl;
  //  else if((a=>150)&&(a<=400))
   // cout<<"Electricity Cost 151-400:"<<d<<endl;
    //else 
    //cout<<"Electricity Cost 400 - >:"<<e<<endl;
    
   //{ if(b>=22)
    //{f=228.17;
    //cout<<"Service :"<<f<<endl;}
   
   // else
    //{g=40.90;
    
    cout<<"Electricity Cost :"<<c<<endl;
    g=228.17;
    cout<<"Service :"<<g<<endl;
    
       h=0.4638*a;
    cout<<"Ft :"<<h<<endl;
 
    i=((c+g+h)*7)/100;
    cout<<"Vat 7 % :"<<i<<endl;
    j=ceil(c+g+h+i);
    cout<<"Total cost :"<<j<<endl;
    
    
    
    
              
    
    
    
    
    
    
    system ("pause");
    return 0 ;
}
