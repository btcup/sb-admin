//5520500134_Wahtcharain Chookbunprasong
#include <iostream>
using namespace std;
int main()
{
 int n,i,j,A,B;
 cout<<"Please input M:";
 cin>>n;
  if(n>0||n<=100)
  {
       int A[n],B[n];          
       cout<<"Please input arry A:"<<endl ;
       for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       cin>>A[n];
       cout<<"Please input arry B:"<<endl ;
       for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       cin>>B[n];
       cout<<"Similarity of A and B is :";
          
  for(int q=0;q<n;q++)
  {
  int a,b,w;
  int a=A[q];
  int b=B[q];
  if(a[q]==b[q])
  cout<<(n*100)/(w=1+1)<<"%"<<endl;
  }    
       
  }
  if(n<0||n>=101)
  {
   cout<<"Wrong input ! !"<<endl;
   cout<<"End program."<<endl;
  break;
  }
 
 system ("pause");  
return 0;
 }
