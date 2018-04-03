#include <iostream>
using namespace std;
int main()
{
    int a,b,i,j,k,l;
    cout<<"Number of student : ";
    cin>>a;
    cout<<"Number of subject : ";
    cin>>b;
    float c[a][b];
    for (i=0;i<a;i++)
    {
        cout<<"score of Student "<<i+1<<" : ";
        for (k=0;k<b;k++)
        {
            cin>>c[i][k];
        }
    }
    cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>j;
    if (j==1)
    {
             int c[i][k];
            for (i=0;i<a;i++)
            {
                for (k=0;k<b;k++)
                {
                    for(l=0;l<c[i][k]/10;l++)
                    {
                          cout<<"O";
                    }
                    if (c[i][k]%10>=5)
                    cout<<"X";
                    
                    cout<<endl;
                }
            }   
    }
    else if (j==2)
    {
         int c[i][k];
         for (i=0;i<a;i++)
         {
          for (k=i;k<b;k++)
          {
            if (c[i][k]>c[i][k-1])
            c[i][k]=c[i][k];
          }
         }
         for (i=0;i<a;i++)
            {
                    for(l=0;l<c[i][k]/10;l++)
                    {
                          cout<<"O";
                    }
                    if (c[i][k]%10>5)
                    cout<<"X";
                    
                    cout<<endl;
            }
    }
    else if (j==3)
    {
            cout<<endl;
    }
    system ("pause");
    return 0;
} 


