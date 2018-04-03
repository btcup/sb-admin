#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    char ch;
    cout<<"Enter N : ";
    cin>>n;
    int mat[n][n];
    if(n<=9){
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      cin>>mat[i][j];}
                                      }
    cout<<"Choose(U:Upper,L:Lower,D:Diagonal): ";
    cin>>ch;
    if(ch=='U'){
                for(i=0;i<n;i++){
                                 for(j=0;j<n;j++){
                                                  if(i>j) mat[i][j]=0;}
                                                  }
                }
     if(ch=='L'){
                for(i=0;i<n;i++){
                                 for(j=0;j<n;j++){
                                                  if(i<j) mat[i][j]=0;}
                                                  }
                }                  
     if(ch=='D'){
                for(i=0;i<n;i++){
                                 for(j=0;j<n;j++){
                                                  if(i!=j) mat[i][j]=0;}
                                                  }
                }                                    
     for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      cout<<mat[i][j]<<" ";}
                     cout<<endl;                 
                     }
}                             
    system("pause");
    return 0;
}
