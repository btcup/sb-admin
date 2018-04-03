#include <iostream>
using namespace std;
int main()
{
	int n,m;
	string s;
	cout<<"number of sublect:";
	cin>>n;
	cout<<"number of student:";
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<"score of Subject "<<i<<":";
			getline(cin,s,'\n');
		}
	}
	system("pause");
	return 0;
}
