#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Size of matrix: ";
    cin>>a;
    if(a==1)
    cout<<"Error!! no sub matrix"<<endl;
    else if(a==2)
    {
    int A[a][a];
    cout<<"Value:"<<endl;
    for(int i=0;i<a;i++){
    for(int j=0;j<a;j++)
    cin>>A[i][j];
    }
    cout<<endl;
    cout<<"Sub-matrix :"<<endl;
    for(int l=a-1;l>=0;l--){
    for(int k=a-1;k>=0;k--){
    cout<<"|"<<A[k][l]<<"|"<<endl;
    cout<<"-----"<<endl;}
    }
    }
    else if(a==3)
     {
    int A[a][a];
    cout<<"Value:"<<endl;
    for(int i=0;i<a;i++){
    for(int j=0;j<a;j++)
    cin>>A[i][j];
    }
    cout<<endl;
    cout<<"Sub-matrix :"<<endl;
    for(int l=0;l<a;l++){
    for(int k=a-1;k>=0;k--){
    cout<<"|"<<A[l][l]<<" "<<A[l][k]<<"|"<<endl;
    cout<<"|"<<A[k][l]<<" "<<A[k][k]<<"|"<<endl;
    cout<<"-----"<<endl;}
    }
    }
    system("pause");
    return 0;
}
    
