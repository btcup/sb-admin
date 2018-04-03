//  5920502487  pipat pingpol 
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int x;
  float y_1,y_2,y_3,y_4,y_5,k_1,k_2,k_3;
  double sum;
  cout<<"Enter an integer :";
  cin>>x;
 
  if(x%10000!=0)
  {
    y_1=x%10 ;
    y_2=x%100;
    k =y_2/10;
    y_3=x%1000;
    int t =y_3/100
    k_2=y_3/1000;
    y_4=x%10000 ; 
    int  k_3=y_4/10000;
    sum=pow( y_1,5)+pow( y_2,5)+pow(k,5)+pow(t,5)+pow(k_3,5);
    if (sum=x)
    {
              cout<<"Number is a target"<<k_3;
              cout<<x<<"is a target  number";
              }  
              else
              {
               cout<<x<<"is a not target  number";
              }       
  }  
    else  if(x%1000!=0)
  {
    y_1=x%10 ;
    y_2=x%100;
    int k =y_2/10
    y_3=x%1000;
    int t =y_3/100
     
    int  k_3=y_4/10000;
    sum=pow( y_1,5)+pow( y_2,5)+pow(k,5)+pow(t,5);
    if (sum=x)
    {
              cout<<"Number is a target"<<k_3;
              cout<<x<<"is a target  number";
              }  
              else
              {
               cout<<x<<"is a not target  number";
              }       
  }  
            
          else   if(x%100!=0)
  {
    y_1=x%10 ;
    y_2=x%100;
    int k =y_2/10
    y_3=x%1000;
    
    sum=pow( y_1,5)+pow( y_2,5)+pow(k,5);
    if (sum=x)
    {
              cout<<"Number is a target"<<k;
              cout<<x<<"is a target  number";
              }  
              else
              {
               cout<<x<<"is a not target  number";
              }       
  }    
                
       system ("pause");
       
       return 0;
       }
       
