//5920501421 jarukan janta
#include <iostream>
#include <cmath> 
using namespace std;
int main ()
{
    int su,st,i,j,g ;      
    double sum ;       
    cout << "Number of subject : " ;
    cin >> su ;
    cout << "Number of student : " ;
    cin >> st ;
    int A[su][st] ;
    for ( i = 1 ; i <= su ; i++ ) 
     {
           cout << "score of Subject " << i << " : " ;
           for (j=1 ; j<=st ; j++) 
                 cin >> A[i][j]; 
     }
     cout << "Select graph (1-score,2-max,3-exit) : " ;
     cin >> g ;
     if( g == 1 || g== 2 )
        {  
             for(i=1 ; i<= su ; i++) 
                {  
                    for(j=1 ; j<= st ; j++)
                       {
                          sum = A[i][j] /10 ;
                          
                       }
                }
        }
   
     system("pause"); 
     return 0 ;
}
