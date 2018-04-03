#include <iostream>
using namespace std;
int main();

int i,j;
char a;
int x[i][j];
cout<<"Enter N:";
cin>>n;
for(i=0;i<n;i++)
     for(j=0;j<i;j++)
     cout<<x[n][n]<<endl;
cout<<"choos(U:Upper,l:Lower,D:Diagonal):";
     cin>>a;
     if(n==3)
        if(a=='U')
          for(i=0;i<n;i--)
          for(j=0;j<i;j++)
          cout<<x[i][j]<<endl;
      if(a=='L')
          for(i=0;i<n;i++)
          for(j=0;j<i;j++)
          cout<<x[i][j]<<endl;
      if(a=='D')
          for(i=0;i<n;i++)
          for(j=0;j<i;j++)
          cout<<x[i][i]<<endl;
     if(n==4) 
              if(a=='U')
                 for(i=0;i<n;i--)
                 for(j=0;j<i;j++)
                 cout<<x[i][j]<<endl;
              if(a=='L')
                 for(i=0;i<n;i++)
                 for(j=0;j<i;j++)
                 cout<<x[i][j]<<endl;
              if(a=='D')
                 for(i=0;i<n;i++)
                 for(j=0;j<i;j++)
                 cout<<x[i][i]<<endl;
     if(n==5) 
              if(a=='U')
                 for(i=0;i<n;i--)
                 for(j=0;j<i;j++)
                 cout<<x[i][j]<<endl;
              if(a=='L')
                 for(i=0;i<n;i++)
                 for(j=0;j<i;j++)
                 cout<<x[i][j]<<endl;
              if(a=='D')
                 for(i=0;i<n;i++)
                 for(j=0;j<i;j++)
                 cout<<x[i][i]<<endl;
system("pause");
return 0;
