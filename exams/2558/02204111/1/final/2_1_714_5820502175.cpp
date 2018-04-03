#include <iostream>
using namespace std;
int main()
{
    int a,m,n;
    int A[m][n];
    cout << "Size of matrix: ";
    cin >> a;
    if(a>1)
    {
    cout << "Value:" <<endl;
    cin >> A[m][n];
    
    
    cout << "Sub-matrix :" <<endl;
    }
    else
    cout << "Error!! no sub matrix";
    cout <<endl;
system("pause");
return 0;
}
