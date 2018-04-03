#include<iostream>
using namespace std;
int main()
{
    int A, i, j;
    char B[i][j];
    i==A;
    j==A;
    cout<<"Size of matrix: ";
    cin>>A;
    if (A>=2){
    cout<<"Value : "<<endl;
    cin>>B[i][j];
    cout<<"Submetrix:" <<endl;
     for (i=2;i<=A;i++)
     for (j=2;j<=A;j++)
       cout<<"|"<<B[i][j]<<"|"<<endl;
       cout<<"-----"<<endl; }
    else {
       cout<<"Error!! no sub matrix"<<endl;
}
    system("pause");
    return 0;
}
    
    
