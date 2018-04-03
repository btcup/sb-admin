#include<iostream>//5920500824 Panuwat Soponvanit
using namespace std;
int main()
{
	int M,i,j,s=0,T=1;
	cout<<"Please input M: ";
	cin>>M;
	int A[M][M],B[M][M];
	cout<<"Please input A: \n";
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
		{cin>>A[i][j];
		if (A[i][j]>=100||A[i][j]<=0)
			{T=0;
			break;}
		}
		if (T==0)
		{
		cout<<"Worng input!!\n";
		break;}
	}
	if (T==1)
	{	
		cout<<"Please input B: \n";
		for(i=0;i<M;i++)
		{
			for(j=0;j<M;j++)
			{cin>>B[i][j];
			if (B[i][j]>=100||B[i][j]<=0)
			{T=0;
			break;}
			}
			if(T==0)
			{cout<<"Worng input!!\n";
			break;
			}
		}
		for(i=0;i<M;i++)
			{	for(j=0;j<M;j++)
				{if (A[i][j]==B[i][j])
					{s=s+1;
					}
				}
			}
		cout<<"Similarity of A and B is: "<<100.0*s/(M*M)<<" % \n";
	}
	if(T==0)
	{cout<<"End program.\n";
	}
	system("pause");
	return 0;
}

