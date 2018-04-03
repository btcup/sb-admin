//5620550346 KODCHAKORN  TADSANASARIT
#include<iostream>
using namespace std;
int main()
{
    int N,i,j ;
    cout<<"Enter a positive integer : " ;
    cin>>N ;
    if(N>0)
    {
           for(i=1;i<=N;i++)
           {
               cout<<"Number of digit is "<<i<<endl ;
               break;
           }
           cout<<"Factor of "<<N<<" are : "<<endl ;
           
           for(i=1;i<=N;i++)
           {  
              if(N%i==0) 
              cout<<i<<" * "<<endl ;        
           }
           for(j=1;j<=N;j--)
              if(N%i==0) 
              cout<<i<<" * "<<endl ;
              
    }
    else if(N<=0)
         cout<<"Invalid number !!" <<endl ;
system("pause") ;
return 0 ;    
}
