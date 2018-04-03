#include <iostream>
using namespace std;


int main()
{
int a,s,d,i,j;
cout<<"Enter a matrix size: ";
cin>>a;
int z[a][a];
cout<<"Enter matrix values:\n";
for(i=0;i<a;i++)
 for(j=0;j<a;j++)
  {cin>>z[i][j];}
  cout<<"The following matrix is diagonal matrix:\n";
for(i=0;i<a;i++)
 {for(j=0;j<a;j++)
  {if(i==j&&z[i][j]!=0)
   {if(i!=j&&z[i][j]==0)
   { cout<<"The following matrix is diagonal matrix:\n";
    
    }}
   else 
   {cout<<"The following matrix is not diagonal matrix:\n";}
   cout<<z[i][j]<<" ";
    cout<<endl;
}}
return 0;
}
