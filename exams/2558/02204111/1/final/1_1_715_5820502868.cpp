#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
char s;
cout<<"Enter N: ";
cin>>n;
float A[n][n];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>A[i][j];
cout<<"Choose(U:Upper,L:Lower,D:Diagonal): ";
cin>>s;
if(s=='u'||s=='U')
{
i=n-1;
for(j=n-1;j>0;j--)
for(k=1;k<=i;k++)
{
A[i][j-k]=0;   
if(j-k==0)
i--;
}
}
else if(s=='L'||s=='l')
{
i=0;
for(j=0;j<n-1;j++)
for(k=1;k<n-j;k++)
{
A[i][j+k]=0;
if(j+k==n-1)
i++;
if(i>=n)
break;                
}   
}
else 
{
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(i!=j)
A[i][j]=0;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout<<A[i][j]<<" ";
cout<<endl;
}
    
system("pause");
return 0;
    
}
