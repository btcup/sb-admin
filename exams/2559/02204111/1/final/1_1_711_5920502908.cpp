//5920502908 WITHAWAT SABAYYING 
#include <iostream>
using namespace std;
int main()
{
	int A[100][100],B[100][100],C[100][100],n;
	int i,z,m,x,c,t,r,y=0,p=0,q;
	cout<<"Please input M and N : ";
	cin>>i>>n;
	cout<<"Please input matrix A : "<<endl;
	for(z=0;z<n;z++)
	{
	for(m=0;m<i;m++)
		cin>>A[m][z];
		cout<<endl;
	}
	cout<<"Please input matrix B : "<<endl;
	for(x=0;x<n;x++)
	{
	for(c=0;c<i;c++)
	cin>>B[x][c];
	cout<<endl;
}
cout<<"A x B : ";
cout<<endl;
		for(r=0;r<i;r++)
{
			for(t=0;t<n;t++)
			{
			C[r][t]=A[t][r]*B[r][t]+C[y][p];
			cout<<C[r][t]<<" ";
			}
			cout<<endl;
}

system("pause");
return 0;

}
