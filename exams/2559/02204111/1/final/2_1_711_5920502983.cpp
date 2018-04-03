//5920502983 Kasem Puchang
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,j,m,k;
    float n;
    cout<<"Please input M :";
    cin>>m;
    int x[m][m],y[m][m];
    cout<<"Please input array A :"<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"Please input array B :"<<endl;
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            cin>>y[i][j];
        }
    }
      for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
         {   
           k = 0;  
           if (x[i][j]==y[i][j])
         { 
           k = k+1;
           n = (k/m*m)*100;
         }
         if (x[i][j]>100||y[i][j]>100)
    {
                                 cout<<"Wrong input !!";
                                 break;
    }                           
         }
    }
    cout<<"Similarity of A and B is : "<<n<<endl;
    
    system ("pause");
    return 0;
}
    
    
