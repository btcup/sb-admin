//5920501537	Thanot Wasuntararat

#include<iostream>
using namespace std;
void sss(int i,int j)
{
	int m=0,n=0,l,h,o;
	int a[m][n];
	for(m=0;m<i;m++)
	{
		
		cout<<"Subj "<<(m+1)<<endl;
		for(n=0;n<j;n++)
		{
			l=a[m][n]/10;
			h=(a[m][n]%10)/5;
			for(o=0;o<l;o++)
			cout<<"o";
			if(h==1)
			cout<<"x";
			cout<<endl;
		}
	}	
}
int main()
{
	int i,j,m=0,n=0,l,h,o;
	int a[m][n];
	cout<<"Number of subject : ";
	cin>>i;
	cout<<"Number of student : ";
	cin>>j;
	for(m=0;m<i;m++)
	{
		cout<<"score of Subject "<<(m+1)<<" : ";
		for(n=0;n<j;n++)
		{
			cin>>a[m][n];
		}
	}
	sss(i,j);
	system("pause");
	return 0;
}
