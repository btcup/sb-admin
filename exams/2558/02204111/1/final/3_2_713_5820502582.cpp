#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout << "Enter a matrix size: ";
    cin >> m;
    int M[m][m];
    cout << "Enter matrix values: " << endl;
    for(i=0; i<m; i++)
    {
             for(j=0; j<m; j++)
             {
             cin >> M[i][j];
             }
    }
    if(M[0][1]!=0)
    {
        cout << "The following matrix is not diagonal matrix: ";
    }
    else
    {
        cout << "The following matrix is diagonal matrix: " ;
        }
        cout << endl;
        cout << "| ";
        for (i=0;i<=0;)
        {
            for (j=0; j<m; j++)
            {
                cout << M[i][j];
                cout << " " ;
            }
        
                break;
        }
        cout << "|" << endl;
        cout << "| ";
        for (i=1;i<=1;)
        {
            for (j=0; j<m; j++)
            {
                cout << M[i][j];
                cout << " " ;
            }
                break;
        }
        cout << "|" << endl;
        if(m>2)
        { 
        cout << "| ";
        for (i=m-1;i<=m;)
        {
            for (j=0; j<m; j++)
            {
                cout << M[i][j];
                cout << " " ;
            }
                break;
        }
        cout << "|" << endl;
        }
        
system ("pause");
return 0;
}
