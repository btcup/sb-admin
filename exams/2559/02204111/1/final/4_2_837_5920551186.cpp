#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m;
	string A[n][m];
	cout<<"Number of student: ";
	cin>>A[n][m];
	cout<<"Number of subject: ";
	cin>>A[n][m];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		cout<<"score of Student "<<j<<": ";
		cin>>m;
	}
	system("pause");
	return 0; 
	
}
