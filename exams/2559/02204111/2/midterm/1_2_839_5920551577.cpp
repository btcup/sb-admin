#include<iostream>
using namespace std;
int main()
{
  int n,sum,i;
  sum=0;
  do{
  cout<<"Enter N:";  
  cin>>n;
  }while(n<=0);
  for(i=2;n%i!=0;i=i+3)
  {
     sum=sum+i ;                     
                   } 
   cout<<"The greatest factor os"<<n<<"is"<<sum<<"-->prime number"<<endl;                   
      
  
  
  
 system("pause");
 return 0;   
}
