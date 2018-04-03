#include <iostream>
using namespace std;
int main ()
{
    int m,n,i,j;
    double A[4][6];
    cout << "Size of matrix:";
    cin >> m;
    if(m!=1)
    {
    cout << "Value:" << endl;
    cin >> A[i][j];
    for(i=0;i<m;i++)
    {
    for(j=0;j<m;j++)
    cout << "Sub-matrix:" << endl;
    cout << "------------------" << endl;
    cout << A[i][j];
}}
    else 
    cout << "Error! ! no sub matrix"<< endl;
    system("pause");
    return 0;
}
