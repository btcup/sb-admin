#include <iostream>
using namespace std;
int main()
{
    long long n,i,sum;
    cout << "Please input number : " ;
    cin >> n;
    cout<< endl;
    sum=0;
    
    
    if (n%2==0)
    {
          cout << "Summation of Even number "<< endl;
    
    
          for (  i=2    ;   i<n     ;  i=i+2     )
          {
              if (       )
              cout <<        << " + " ;
              
              
              
              sum =sum+    ;
              
          }
          
          cout <<    << " = " << sum ;
         
             
    }
    
    else if(n%2==1)
    {
             
          cout << "Summation of Odd number "<< endl;   
          
                       
          for (  i=1    ;   i<n     ;  i=i+2     )
          {
              if (       )
              cout <<        << " + " ;
              
              
              
              sum =sum+    ;
              
          }
          
          cout <<    << " = " << sum ;


    }


   
    else 
         cout << "!! Wrong Input !!" << endl;
                
        
    cout << endl;
    system ("pause");
    return 0 ;
}
        
