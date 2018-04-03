// Ponlawit Archawaphakdee 5920500476
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cout<< "please input M and N :";
	cin>>m>>n;
	int A[i][j],B[i][j];
	cout<<"please input matrix A";
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>> A[i][j];
		cout<<endl;
	}
	cout<<"please input matrix B";           
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>> B[i][j];
		cout<<endl;
	}	
	int a=0,b=0,c=41,d=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<(A[i][j]*B[i+1][j]+A[i][j+1]*B[i+1][j])<<" ";	
		}
			cout<< endl;
	}
system("pause");
return 0;
}	

