#include <iostream>
using namespace std;
int main()
{
    char choose;
    int n, i, j, a[i][j];
    cout<< "Enter N: ";
    cin>> n;
    if (n<=9){ 
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        cin>> a[i][j];
    }
    cout<< "Choose(U:Upper,L:Lower,D:Diagonal): ";
    cin>> choose;
    if (choose=='U')
    {
                    for (i=0; i<n; i++)
                    {
                        for (j=0; j<n; j++)
                        {
                            if (i>j) a[i][j]=0;
                            cout<< a[i][j];
                            cout<< " ";
                        }
                        cout<<endl;
                    }
    }    
    else if (choose=='L')
    {
         for (i=0; i<n; i++)
         {
             for (j=0; j<n; j++)
             {
                 if (i<j) a[i][j]=0;
                 cout<< a[i][j];
                 cout<< " ";
             }
             cout<<endl;
         }
         
    }
    else if (choose=='D')
    {
         for (i=0; i<n; i++)
         {
             for (j=0; j<n; j++)
             {
                 if (i!=j) 
                 a[i][j]=0;
                 cout<< a[i][j];
                 cout<< " ";
             }
             cout<<endl;
         }
    }
    }
    system ("pause");
    return 0;
}
