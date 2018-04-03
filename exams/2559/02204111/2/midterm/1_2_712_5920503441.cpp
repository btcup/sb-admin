#include <iostream>
using namespace std;//5920503441
int main()
{ 
  int a,n,i=1;

  do
  {
      cout<<"Enter N:";
      cin>>n;
  }while(n<=0);
  a=n;
  do{
               a=a%i;
               if(a==0)
               {
                          a=a/i;
               i++;
               }
               else
               {
                a=a/i;
                }
                 
               
  }
  while(i<n);
  cout<<"The greatest factor of "<<n<<" is "<<i;
  if(i==n)
  {
          cout<<"<-----prime number";
          }
  system("pause");
  return 0;
      
}
  
  
