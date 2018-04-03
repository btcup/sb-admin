#include <iostream>
using namespace std;
int main ()
{
	int i,j,n;
	char ch;
	cout<<"Enter N: ";
	cin>>n;
	int m[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>m[i][j];
	cout<<"Choos(U:Upper,L:Lower,D:Diagonal): ";
	cin>>ch;
	
	if(ch=='U')
	  {
	    for(i=1;i<n;i++)
		for(j=0;j<i;j++)
			m[i][j]=0;
	  	
    	for(i=0;i<n;i++)
    	{
    	for(j=0;j<n;j++)
    		cout<<m[i][j]<<" ";
    	cout<<endl;
    	}
	  }
	  
	if(ch=='L')
	  {
	    for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			m[i][j]=0;
	  	
    	for(i=0;i<n;i++)
    	{
    	for(j=0;j<n;j++)
    		cout<<m[i][j]<<" ";
    	cout<<endl;
    	}
	  }
	
	if(ch=='D')
	  {
	    for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			m[i][j]=0;
		for(i=1;i<n;i++)
		for(j=0;j<i;j++)
			m[i][j]=0;
	  	
    	for(i=0;i<n;i++)
    	{
    	for(j=0;j<n;j++)
    		cout<<m[i][j]<<" ";
    	cout<<endl;
    	}
	  }
	
	cout<<endl;
	system("pause");
	return 0;
}
