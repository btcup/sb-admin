#include<iostream>
using namespace std;
int main()
{
	int stu , n , g , i , j ;
	cout<<"Number of student : ";	cin>>stu;
	cout<<"Number of subject : ";	cin>>n;
	double sub[stu][n] , x = 0 ;
	for( i = 0 ; i < stu ; i++ )
	{
		cout<<"score of Student "<<i+1<<" : ";
		for( j = 0 ; j < n ; j++ )
			cin>>sub[i][j];
	}
	cout<<"Select graph (1-score,2-max,3-exit) : ";		cin>>g;
	cout<<endl;
	if( g == 1)
	{
		for( i = 0 ; i < stu ; i++)
		{
			cout<<"Student"<<i+1<<endl;
			for( int j = 0 ; j < n ; j++ )
			{
				while(1)
				{
					if( sub[i][j] >= 10)
					{
						sub[i][j] = sub[i][j] - 10;
						cout<<"O";
					}
					else
					{
						if( sub[i][j] - 5 >= 0)
							cout<<"X";
						break;	
					}
				}
				cout<<endl;
			}
		}
	}
	if( g == 2 )
	{
		for( i = 0 ; i < stu ; i++)
		{
			cout<<"Student"<<i+1<<endl;
			for( int j = 0 ; j < n ; j++ )
			{
				if( sub[i][j] >= x)
					x = sub[i][j];
			}
			while(1)
			{
				{
					if( x >= 10)
					{
						x = x - 10;
						cout<<"O";
					}
					else
					{
						if( x - 5 >= 0)
							cout<<"X";
						break;	
					}
				}
			}
			cout<<endl;
		}
	}
	if( g == 3)
	cout<<"Exit , Thank You!";
	
return 0 ;	
}
