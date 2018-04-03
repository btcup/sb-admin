#include<iostream>
using namespace std;
int main ()
{
    int a,i,j;
    string n[i][j];
    cout<<"Enter a matrix size :";
    cin>>a;
    cout<<"Enter matrix values :"<<endl;
    cin>>n[i][j];
    if(n[i][j]==n[j][i])
    cout<<"The following matrix is not diagonal matrix:"<<endl;
    else
    cout<<"The following matrix is  diagonal matrix:"<<endl;

system("pause");
return 0;

}
