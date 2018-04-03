//5920502916Weerapat Insomtua
#include <iostream>
using namespace std;
int main()
{
    int i,n,j,k,L;
    float percent,P;
    cout<<"Please input M: ";
    cin>>n;
    int A[n][n],B[n][n];
    
    cout<<"Please input array A: ";
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
      cin>>A[i][j];
              while(A[i][j]<=0||A[i][j]>=100)
              {
              cout<<"Wrong input!!"<<endl; 
              cout<<"End program."<<endl;
              break;
              }
      }
    }

            
    cout<<"Please input array B: ";
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      cin>>B[i][j];  
             while(A[i][j]<=0||A[i][j]>=100)
             {
             cout<<"Wrong input!!"<<endl; 
             cout<<"End program."<<endl;
             break;
             }
    }

     
     for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      if(A[i][j]==B[i][j])
      {P=P+1;}  
    }
    percent=(P/(n*n))*100;
    cout<<"Similarity of A and B is: "<<percent<<" %"<<endl;
     
     
    
system("pause");
return 0;
}
