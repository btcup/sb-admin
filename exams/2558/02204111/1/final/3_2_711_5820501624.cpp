#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"Enter a matrix size :";
cin>>n;
cout<<"Enter matrix values :"<<endl;
int x[n][n];
for(i=0;i<n;i++)
                {for(j=0;j<n;j++)
                cin>>x[i][j];}
    for(i=0;i<n;i++)
       {  if(x[i][i]==0) break;
          for(j=0;j<n;j++)
          {if(x[i][j]!=0) break;}
                        cout<<"The following matrix is not diagonal matrix :"<<endl;
                         for(i=0;i<n;i++)
                         {cout<<"|";
                         for(j=0;j<n;j++)
                         cout<<"  "<<x[i][j];
                         cout<<" | "<<endl;  }
       }           
   
         
system("pause");
return 0;
}
