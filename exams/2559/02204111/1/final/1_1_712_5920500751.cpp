#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,y,z;
	cout<<"Please in put M and N ";
	cin>>m>>n;
    int a[n][m];
    int b[m][n];
    cout<<"Please in put matrix A : "<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
    	cin>>a[i][j];
    }
     
	
    
     cout<<"Please in put matrix B : "<<endl;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
 	cin>>b[i][j];
    }

 cout<<"A*B"<<endl;
	for(i =0;i<n;i++)
	{
		
       for(j=0;j<n;j++)
        {
        z=a[i][0]*b[0][j];
        y=a[i][1]*b[1][j];        
	    cout<<z+y<<" ";
		}
		cout<<endl;
	}	
 system("pause");
 return 0;
}
