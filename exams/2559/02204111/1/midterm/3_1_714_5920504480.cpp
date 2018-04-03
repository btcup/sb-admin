//5920504480 asamaphon fongsieng

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
     double x,t,i,n,m;
      
      while( x>=0 )
      { 
        if(x<0)
        break;
        cout<<"input value: ";
        cin>>x;
       i=i+1;
      if(x>=10)
           cout<<"InvalidInput!! Try Again"<<endl;
      else if(i==1)
          x=m;
      else if (i>1)
         {  n=pow(10,i);
            m=x*n;
            
         }
       
       t=m;
       
       if(x<0)
        break;
      }
      
      cout<<"total is "<<t;
   system ("pause");
   return 0;
}     
    
            
      
