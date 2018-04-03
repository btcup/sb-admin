//5920500328 Miss.Jeernan Chanmanee 

#include<iostream>
using namespace std;
int main()
{
     int n,m,i,j;
    cout<<"Plaese input M and N : ";
    cin>>n>>m;
    int a[n][m],b[m][n] ; 
    cout<<"Plaese input matrix A : ";
    cin>>a[n][m];
        for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {   cout<<j;
            cout<<" "; }
        cout<<endl;}
    cout<<"Plaese input matrix B : ";
    cin>>a[n][m];
        for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {   cout<<j;
            cout<<" "; }
        cout<<endl;}
    system("pause");
    return 0;
}
