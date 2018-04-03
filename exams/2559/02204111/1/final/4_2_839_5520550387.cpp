//5520550387 suwat tungsupatawuch 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,m,n;
    
    cout << "Numer of student : ";
    cin >> m;
    cout << "Numer of student : ";
    cin>> n;
    float a[n][m],b[n][m],;
    cout << "score of studen  1:" ;
    for(i=0; i<n; i++)
    {
             
             for(j=0; j<m; j++)
             {
                       
                  cin >> a[i][j];                  
             }
    }
     
     
    cout << "score of studen 2:" ;
    for(i=0; i<m; i++)
    {
             for(j=0; j<n; j++)
             {
                      cin >> b[i][j];
             }
    }  
cout<<endl;
cout<<"Select graph (1-score,2-max,3-exit) :"<<endl;
 
  system("pause"); 
  return 0;  
}
