#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n,m=0,p;
    int max[n][n];
    cout<<"Size of matrix :";
    cin>>n;
    if(n<=1)
    {
           cout<<"Error!! no sub matrix"<<endl;
    }
    else
    cout<<"value :"<<endl;;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                     cin>>max[i][j] ;             
                    }                
    }
    cout<<"Sub-matrix :"<<endl;
    for(i=n-1;i>=0;i--)
      for(j=i;j>=0;j--)
         {
         cout<<max[i][j]<<endl;
         }
    system("pause");
    return 0;
}
