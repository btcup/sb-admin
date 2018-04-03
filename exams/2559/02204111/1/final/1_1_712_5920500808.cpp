//5920500808  Pikhanet    Attasuriyakun
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int m,n,i,j,k,l,x,s;
     cout << "Please input M and N : ";
     cin >> m >> n;
 int a[m][n],b[m][n],c[n][n];   
    cout << "Please input matrix A : " << endl;
         for( i=0 ; i<m ; i++)
         for( j=0 ; j<n ; j++)
         cin >> a[i][j];
         
    cout <<"Please input matrix B : " <<endl;
         for( i=0 ; i<m ; i++)
         for( j=0 ; j<n ; j++)
         cin >> b[j][i];
         
         for(l=0 ; l<n ; l++ )
         for(k=0 ; k<n ; k++ ){
                 
                 for(i=0 ; i<n ; i++ ){
                 s=0;
                     for(j=0 ; j<n ; j++ ){
                         x = a[k][j]*b[j][i];
                         s = s + x;
                         }
                 }c[l][k] = s;
         }
           
    cout << "A x B :" <<endl;
        for ( i=0 ; i<n ; i++ ){
        for ( j=0 ; j<n ; j++ ){
         cout << c[i][j] << " " ;
         }cout << endl;
         }
    system("pause");     
    return 0;
}
