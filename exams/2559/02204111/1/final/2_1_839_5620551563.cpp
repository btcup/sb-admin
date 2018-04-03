//5620551563sophon uthairungratsamee
#include <iostream>
using namespace std;
int main()
{
    int i,j,m,sum,n;
    int A[m][m],B[m][m];
    cout<<"Please input M : ";
    cin>>m;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<100;j++)
                    {
                                      cout<<"Please input array A : "<<endl;
                                      cin>>A[i][j];                 
                    }
                    cout<<endl;
                    if(m>100)
                    {
                             cout<<"Wrong input !!";
                             cout<<"End program .";
                    }
     }
     for(i=0;i>m;i++)
     {
                    for(j=m;j<100;j++)
                    {
                                      cout<<"Please input array B : ";
                                      cin>>B[i][j];
                    }
                    cout<<endl;
                    if(m>100)
                    {
                             cout<<"Wrong input !!";
                             cout<<"End program .";
                    }
                    else
                    {
                       sum=(((A[i][j])+(B[i][j]))/2)*100;
                       cout<<"Similarity of A and B is : "<<sum<<" % ";
                       cout<<endl;
                    }
                     
     }
     system("pause");
     return 0;
}
