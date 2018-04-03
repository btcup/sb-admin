#include<iostream>
using namespace std;
int func1(string c)
{
	int i,j;
    for(i=0;i<=c.size();i++)
    {
    	j=c[i];
    }	
}


int main()
{
	int s,n,i,m;
	string c;
	cout<<"Number of student :";
	cin>>s;
	cout<<"NUmber of sudent :";
	cin>>n;
	for(i=1;i<=s;)
	{	getline(cin,c,'\n');
		cout<<"score of studeat "<<i<<":";
		cout<<c<<endl;
	     func1(c);
		i++;
	}

		cout<<"Select graph(1-score,2-max,3-exit):";
	cin>>m;
	if(m ==1)
	{
		
		
	}
	
	
	
	
	
	
	
	system ("pause");
	return 0;
} 
