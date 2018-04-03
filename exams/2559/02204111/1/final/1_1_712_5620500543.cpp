//5620500543 napatdanai rathapaknithichot
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,m,n,ans;
    
    cout << "Plese input M and N: ";
    cin >> m >> n;
    int a[m][n],b[n][m];
    cout << "Plese input matrix A:" << endl;
    for(i=0; i<n; i++)
    {
             for(j=0; j<m; j++)
             {
                      cin >> a[m][n];
             }
    }  
    cout << "Plese input matrix B:" << endl;
    for(i=0; i<m; i++)
    {
             for(j=0; j<n; j++)
             {
                      cin >> b[n][m];
             }
    }  
    cout << endl << endl;
    cout << "A * B:" << endl;
    for(i=0; i<n; i++)
    {
             for(j=0; j<n; j++)
             {
                   ans = (a[i][i]*b[i][j])+(a[i][i+1]*b[i+1][j]);
                   cout << ans << " "; 
             }
             cout << endl;
    }
    
  system("pause"); 
  return 0;  
}
