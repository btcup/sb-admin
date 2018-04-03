#include <iostream>
using namespace std;
int main ()

{
   
int i,j,m,n ;

cout<<"Enter matrix size:" ;
cin >>n;
int B[n][n] ;
cout<<"Enter matrix values:" ; 


 for (i=0;i<n;i++) 
 {

 for (j=0;j<n;j++)
 cin>>B[i][j];
 }
 
 for (i=0;i<m;i++)
 
{
    
     cout <<B[i][j];
     cout<<endl;
   
}



    

system ("pause") ;
return 0;
}
