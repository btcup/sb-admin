//5720551573    Kaweewat Hongdamnern
#include <iostream>
using namespace std;
int main ()
{
    char A,B,C,J,E,F;
    double x,y,z,s,m;
    cout<<"Enter car model:";
    cin>>A>>B>>C>>J;
    cout<<"Enter number of years (1-6):";
    cin>>E;
    cout<<"Enter your Salary:";
    cin>>F;
    cout<<"Financinf amount:";
    cin>>x;
    z=x-x*0.25;
    cout<<"Amount of interest:";
    {
                  if(A==2.09)
                  s=x*2.09*E;
                  else if(B==1.79)
                  s=x*1.79*E;
                  else if(C==1.99)
                  s=x*1.99*E;
                  else if(J==1.99)
                  s=x*1.99*E;
                  cout<<"Monthly payment:";  
                  if(m>=s)
                  cout<<"The monthly payment is over 50% of your salary!!";
                  else if (m<=s)
                  cout<<"Good decision,Enjoy your new car";
                  m=(z+s)/E;
                  }
                  

}
system("pause");
return0;
}
    




  
    
    
    
    
    
    
                 
    



