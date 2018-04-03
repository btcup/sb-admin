//5920501588 Phanutchaporn Ong-ard
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,i,j,z,l,m,n;
    
    cout<<"Number of student : ";
    cin>>x;
    cout<<"Number of subject : ";
    cin>>y;
    
    double A[x][y];
    
    for(i=0;i<x;i++)
    {
        cout<<"score of student "<<i+1<<" : ";
        for(j=0;j<y;j++)
        {cin>>A[i][j];}
    }
    
    cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>z;
    
    
   if(z==1)
    {
            for(l=0;l<x;l++)
            {cout<<"student"<<l+1<<endl;
            for(m=0;m<y;m++)
            {
            if(A[l][m]/10!=0)
            {for(n=1;n<=A[l][m]/10;n++)
            cout<<"O";}
            if(A[l][m]%10>=5)
            {cout<<"x";}
            cout<<endl;
            }
            }
    }
    
    if(z==2)
    {
            
    }
    
    

    
    
    system("pause");
    return 0;
}
