//5920500441 piyawut pumkuman
#include <iostream>
using namespace std;
int main ()
{
    int m,i,j,k;
    int sum =0;
    bool g = true;
    
    cout<<"Please input M : ";
    cin>>m;
    
    int A[m][m];
    int B[m][m];
    
    cout<<"Please input array A : "<<endl;
    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
       {
          cin>>A[i][j];
       }
      
   
   
    cout<<"Please input array B : "<<endl;
     for(i=0;i<m;i++)
       for(j=0;j<m;j++)
       {
          cin>>B[i][j];       
       }
       
    for (i=0;i<m;i++)
    for (j=0;j<m;j++)
    {
      if (A[i][j] == B[i][j])
      sum=sum+1  ;
    }
     
     
     cout<<"Similarity of A and B is : ";
     cout<<(double((sum*2)*100)/(m*m*2))<<"%"<<endl;  
       
    
       
       system("pause");
       return 0;
}
