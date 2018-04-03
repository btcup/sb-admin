#include<iostream>
using namespace std;
int main(){
    
int n;
cout<<"Size of matrix : ";
cin>>n;
int A[n][n];
cout<<"Value : "<<endl;
for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
                cin>>A[i][j];
cout<<"Sub-matrix : "<<endl;
if(n==2){
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cout<<A[i][j]<<endl;
        }
        }
else if(n>2){
     int a=0,b=0,k=0;
for(k=0;k<n*n;k++){
for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++)
        cout<<A[i][j-b];
        cout<<endl;
        }
        cout<<"-----"<<endl;
        if(k%2!=0&&b<n)
        b=b+2;
        
        else if(k%2==0&&b<n)
        b=b+1;
        
     }
     }




    system("pause");
    return 0;
    }
