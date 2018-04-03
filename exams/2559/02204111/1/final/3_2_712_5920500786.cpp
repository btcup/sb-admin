//5920500786 Panjapon ponkaset
#include <iostream>
using namespace std;

	 
	int main()
	{
		int n,m;
		char S;
		cout<<"Number of subject: ";
		cin>>n;
		cout<<"Number of student: ";
		cin>>m;
		float A[n][m];
		for(int i=0;i<n;i++)
		{	cout<<"score of Subject "<<i+1<<":";
			for (int j=0;j<m;j++)
			{
			 cin>>A[i][j];
			}
		}
		cout<<"Select graph (1-score,2-max,3-exit):";
		cin>>S;
		do{
		
		if (S=='1')
		{
			
		}
		else if (S=='2')
		{
			
		}
		else if (S=='3')
		{
			break;
		}
	     	}while(1);
	 	
	 return 0;
	}
