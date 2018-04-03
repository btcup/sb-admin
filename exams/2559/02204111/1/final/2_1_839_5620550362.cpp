//5620550362Khorakot Saiyanart
#include <iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    float k,b;
    cout<<"Please nput M: ";
    cin>>n;
    if(n>0||n<100)
    {
        int A[n][n],B[n][n];
        
        cout<<"Please input array A:"<<endl;
        for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
           cin>>A[i][j];
          
       }
       cout<<"Please input array B:"<<endl;
        for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
           cin>>B[i][j];
       }
           
            for(i=0;i<n;i++)
            {
             for(j=0;j<n;j++)
              if(A[i][j]==B[i][j])
              {
               sum=sum+1;
              }
             }
             
            
      
    
     }
     else
     {
         cout<<"Wrong input!!"<<endl;
         cout<<"End program."<<endl;
     }
      b=n*n;
      k=(sum/b)*100;
       cout<<endl;
       cout<<"Similarity of A and B is: "<<k<<"%"<<endl;
    
    system("pause");
    return 0;
}
