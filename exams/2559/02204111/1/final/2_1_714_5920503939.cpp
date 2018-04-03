//5920503939 Saowapak Pohduang
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    double percent,num;
    cout<<"Please input M:";
    cin>>m;
    int A[m][m],B[m][m],i,j;
    
    cout<<"Please input array A:\n";
    for(i=0;i<m;i++)
    {  for(j=0;j<m;j++)
                    {cin>>A[i][j];
                    n=A[i][j]; if(n<0||n>100){n=1; break;}}
                    if(n<0||n>100){n=1; break;}
    }
    if(n>0&&n<100){
    cout<<"Please input array B:\n";
    for(i=0;i<m;i++)
    {  for(j=0;j<m;j++)
                    {cin>>B[i][j];
                    n=B[i][j]; if(n<0||n>100){n=1; break;}}
                    if(n<0||n>100){n=1; break;}
    }
    
    for(i=0;i<m;i++)
    {  for(j=0;j<m;j++)
                    {if(A[i][j]==B[i][j]){num++;}}
    }
    
    percent=float(num/float(m*m))*100.00;
    cout<<"\nSimilarity of A and B is: "<<percent<<" %"<<endl;
    }

    system ("pause");
    return 0;
    }
