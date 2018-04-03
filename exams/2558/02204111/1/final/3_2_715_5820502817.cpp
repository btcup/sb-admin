#include<iostream>
using namespace std;
int main()
{
    int m,i,j;
       bool k=0;
    cout<<"Enter a matrix size: ";
    cin>>m;
    int a[m][m];
    cout<<"Enter matrix values: "<<endl;
     for(i=0;i<m;i++)
    for(j=0;j<m;j++)
      cin>>a[i][j];
      
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
   {
   if(i!=j){
   if(a[i][j]!=0)
   cout<<"The following matrix is not diagonal matrix: "<<endl;
   ;break;
    if(a[i][j]==0)
   cout<<"The following matrix is diagonal matrix: "<<endl;
   ;break;
}
}
       cout<<a[i][j];
   
   
    system("pause");
    return 0;
}
