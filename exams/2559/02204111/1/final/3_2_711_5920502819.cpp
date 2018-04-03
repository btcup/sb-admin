#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,a=1,b,s,c,z;
	double n[100][100],d,max[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	cout<<"Number of subject :";
	cin>>i;
	cout<<"Number of student :";
    cin>>j;
    while(a<=i)
    {
    	b=1;
    	cout<<"score of Subject "<<a<<":";
    	while(b<=j)
    	{
    		cin>>n[a-1][b-1];
    		b=b+1;
    	}
    	a=a+1;
    }
    cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>s;
    a=1;
    b=1;
    if(s==1)
    {
    	while(a<=i)
    	{
    		b=1;
    		cout<<"subj"<<a;
    		cout<<endl;
    		while(b<=j)
    		{
    			z=1;
    			c=n[a-1][b-1]/10;
    			d=(n[a-1][b-1])-(c*10);
    			while(z<=c)
    			{
    				cout<<"o";
    				z=z+1;
    			}
    			if(d>=5)
    			{
    				cout<<"x";
    			}
    		cout<<endl;
    		b=b+1;
    		}
    		a=a+1;
    	}
    }
    a=1;
    b=1;
    if(s==2)
    {
    	
    	while(a<=i)
    	{
    		b=1;
    		while(b<=j)
    		{
    			if(max[a-1]<=n[a-1][b-1])
    			{
    			max[a-1]=n[a-1][b-1];
    			}
    			else if(max[a-1]>n[a-1][b-1])
    			{
    				max[a-1]=max[a-1];
    			}
    			b=b+1;
    		}
    		a=a+1;
		}
		a=1;
		while(a<=i)
		{
			z=1;
			cout<<"Subj"<<a<<endl;
			c=max[a-1]/10;
    		d=(max[a-1])-(c*10);
    			while(z<=c)
    			{
    				cout<<"o";
    				z=z+1;
    			}
    			if(d>=5)
    			{
    				cout<<"x";
    			}
    		cout<<endl;
    		a=a+1;
		}
		
    }
    else if(s==3)
    {
    	while(s==3)
		break;	
    }
system("pause");
return 0;
}
