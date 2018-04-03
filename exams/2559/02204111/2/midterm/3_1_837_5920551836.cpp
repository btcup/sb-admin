//5920551836 Peeranat Passananon
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double ATH,LTH;
    double ATM,LTM;
    double result;
    double result1,result2;
    
    cout<<"Arrival time : ";
    cin>>ATH>>ATM;
    
    cout<<"Leave time : ";
    cin>>LTH>>LTM;
    
    result1 = LTH - ATH;
    result2 = LTM - ATM;
  
    cout<<result1<<" hourse and "<<result2<<" minutes"<<endl;
    
    if(result1 < 3 || result2 <= 60 )
    {
               cout<<"You have to pay 0 bath";
               
               
    }
    
    
    else if ( result1  >= 4  || result2 <= 60)
    {
         cout<<"You have to pay 40 bath";
         
         
         }
    
    system("pause");
    return 0 ;
    
    
    
    
    }
