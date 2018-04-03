#include<iostream>
using namespace std;

int main()
{int i,j,n,k,l;
    cout<<"Enter n:";
    cin>>n;
    if(n<=9)
    {int a[9][9];
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
     cin>>a[i][j];}
      for(k=0;k<n;i++)
    {for(j=0;j<n;j++)
     cout<<a[k][j];}}
     cout<<"choose(U:Upper,L:lower,D:diagonal):";
     
    
    
    
 system ("pause");
 return 0 ;   
    
}
