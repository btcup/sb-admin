#include<iostream>
using namespace std;
 int main ()
{
 int a[1][1]; int n,i,j;
 cout<<"Enter matrix size :";
 cin>>n;
 cout<<"Enter matrix value :";
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)  
cin>>a[i][j];
if(i!=j&&a[i][j]==0)
{
   cout<<"The following matrix is diagonal matrix";          
              }
   else if(i==j&&a[i][j]!=0)
   {
    cout<<"The following matrix is  NOT diagonal matrix"; 
}
for(i=0;i<n;i++)
 for(j=0;j<n;j++)  
cout<<a[i][j];
cout<<endl;
system("pause");
return 0;
}
