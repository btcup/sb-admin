 //5920503009 Jaiwijit Jutaree 
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,M ;
    cout<<"Please input M : ";
    cin>>M;
    int A[M][M],B[M][M];
    cout<<"Please input array A : "<<endl;
     for(i=0;i<M;i++)
         { for(j=0;j<M;j++)
           {  cin>>A[i][j];
              if(A[i][j] == n) 
                 {if(n<0||n>100);
                 break;
                 }
            }
            cout<<"Wrong input!!"<<endl<<"End program."<<endl;        
         }
    cout<<"Please input array B : "<<endl;
     for(i=0;i<M;i++)
         { for(j=0;j<M;j++)
           { cin>>B[i][j]; 
              if(B[i][j] == n) 
                 {if(n<0||n>100)
                 break;
                 }     
           }
           cout<<"Wrong input!!"<<endl<<"End program."<<endl;
         }
system("pause");
return 0;
}
