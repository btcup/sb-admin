#include <iostream>
using namespace std;
int main()
{
     int n,v,i,j,s;
     int A[i][j];
     cout<<"Size of matrix :";
     cin>>n;
     cout<<"Value :"<<endl;;
     cin>>v;
    
    
     
    
     cout<<"Sub-matrix :"<<endl;
     for(i=0;i<=n;i++)
     {
        for(j=0;j<=n;j++)
        {
          s=A[i+1][j];
          cout<<"|"<<s<<"|"<<" "<<endl;
          cout<<"-----"<<endl;
        }
     
     }
 

system ("pause");
return 0;
}
