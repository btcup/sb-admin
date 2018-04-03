#include<iostream>
using namespace std;
int main(){
         int n,i,j,x;
         cout<<"Enter matrix values:";
         cin>>n;
         int a[n][n];
         cout<<"Enter matrix values:"<<endl;
         for(i=0;i<n;i++){
         for(j=0;j<n;j++){
                          cin>>a[i][j];
                          }
         cout<<endl;         
         }
          for(i=0;i<n;i++){
                          for(j=0;j<n;j++){
                          if(i==j){
                          if(i==n-1&&j==n-1)break;
                          j++;
                          }
                          if(a[i][j]!=0)
                          x=0;
                          }
                          }
          if(x==0)
          cout<<"The following matrix is not diagonal matrix:"<<endl;
          else
          cout<<"The following matrix is diagonal matrix:"<<endl;
          for(i=0;i<n;i++){
                          cout<<"| ";
                          for(j=0;j<n;j++){
                          cout<<a[i][j]<<" ";
                          }
                          cout<<"|"<<endl;
                          }
system("pause");
return 0;
}
