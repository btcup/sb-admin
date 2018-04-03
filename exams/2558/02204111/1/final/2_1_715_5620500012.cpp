#include<iostream>
using namespace std;
int main()
{ 
 int a[2][2],m[2],n[2],i,j;
  cout<<"Size of matrix:";              
  cin>>a[2][2];
  
  cout<<"Value"<<endl;
  cin>>m[2]>>n[2];
  
if(a[2][2]>1)  
{
  for(i=0;i<n[2];i++)
 {
  for(j=0;j<n[2];j++)
  {
    a[2][2]=m[2]*n[2];              
    cout<<a[2][2];              
      
}
}            
}
else
 cout<<"!!no sub matrix";



system("pause");
return 0;
}
