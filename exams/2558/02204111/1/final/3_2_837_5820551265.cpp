#include <iostream>
using namespace std;

int main()
{
    for(int r=0; ;r++){
int n;
cout<<"Enter a matrix size : ";
cin>>n;

int m[n][n];
cout<<"Enter matrix values : "<<endl;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
  cin>>m[n][n];
  }              
 }
 
 
 
 if(n==2)
 {
 cout<<"The following matrix is not diagonal matrix : "<<endl;
 }
 else
 {
 cout<<"The following matrix is diagonal matrix : "<<endl;
 }
 
   
  for(int y=0;y<n;y++)
  {
  cout<<"|";
     for(int z=0;z<n;z++)
     {
     cout<<m[n][n]<<" ";
     }         
  cout<<"|"<<endl;     
  }
}
system("pause");
return 0;
}
