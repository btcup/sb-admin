//5920502941 surapat 
#include<iostream>
using namespace std;
int main()
{
	
	double a=0;
	int n,i,j,k=0,z=0;
	cout<<"Pleace input M: ";
	cin>>n;
	int b[n][n],c[n][n];
	cout<<"Pleace input array A:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
			if(b[i][j]<0||b[i][j]>100)
	     	{
			cout<<"Wrong input !!"<<endl<<"End program.";
			k=1;
			i=n+1;
			j=n+1;
	     	}
		}
		
	}
	if(k==0)
	{
		cout<<"Pleace input array B:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>c[i][j];
			if(c[i][j]<0||c[i][j]>100)
	     	{
			cout<<"Wrong input !!"<<endl<<"End program.";
			z=1;
			i=n+1;
			j=n+1;
	     	}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j]==c[i][j])
			{
				a=a+1;
			}
		}
	}
	if(z==0)
	{
		cout<<"Similarity of A and B is: "<<a/(n*n)*100<<" %";
	}
	}
	return 0;
}
