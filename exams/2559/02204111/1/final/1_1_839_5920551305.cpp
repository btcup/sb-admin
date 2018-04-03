//5920551305 Khanoot somboonpanya;
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int M,n,i,j;
    cout<<"Please input M: ";
    cin>>M;
    int A[M][M],B[M][M];
    
    cout<<"Plase input array A: "<<endl;
    for(i=0;i<M;i++)
    {
       for(j=0;j<M;j++)             
       cin>>A[i][j];      
          if( A[i][j] < 0 || A[i][j] >100)
          {
              cout<<"Wrong input !!"<<endl<<"End program"<<endl;
              break;
              }         
                      
                   }     
    
                   
      
     cout<<"Plase input array B: "<<endl;   
      for(i=0;i<M;i++)
         {
       for(j=0;j<M;j++)             
       cin>>B[i][j];
          if( B[i][j] < 0 || B[i][j] >100)
          {
              cout<<"Wrong input !!"<<endl<<"End program"<<endl;
              break;
              }         
               }    
    
    
    
    system("pause");
    return 0;
    }
