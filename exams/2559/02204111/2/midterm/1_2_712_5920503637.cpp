//5920503637 jenjira
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N,x=2,m=2;
	cout<<"Enter N:";
	cin>>N;
	while(N<=0)
	{
		cout<<"Enter N:";
		cin>>N;
		
	}
	cout<<"the greatest factor of "<<N<<" is ";
	
	do
	{
	    if(N%x==0)
	    {
			cout<<" ";
				break;
				if(x%m!=0)
				{
					m++;
					cout<<m;
				}
			
	    }
	    
		
	
	}
	while(x<N);	
	cout<<m<<endl;
	
	system("pause");
	return 0;
}
