#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,i,j,n,k,x,y;
	cout<<"Number of student : ";
	cin>>a;
	cout<<"Number of subject : ";
	cin>>b;
	double s[a][b];
    for(i=0;i<a;i++)
    {
	   cout<<"score of Student "<<i+1<<":";
	   {
		for(j=0;j<b;j++)
		cin>>s[i][j];	
	   } 
    }
   cout<<"Select graph (1-score,2-max,3-exit): ";
   cin>>n;
   if(n==1)
   {
   	for(i=0;i<a;i++)
    {
	   cout<<"Student "<<i+1<<":"<<endl;
	   {
		for(j=0;j<b;j++)
		{
		
		x=s[i][j]/10;	
		y= int (s[i][j])%10;	
		 for(k=0;k<x;k++)
		 {
		 cout<<"o";
	     }
	     if(y>=5)
		 cout<<"x";
	     cout<<endl;    
	   }	   
      }  	
    }
  }
  else if(n==2)
   {
   	for(i=0;i<a;i++)
    {
	   cout<<"Student "<<i+1<<":"<<endl;
    }
  }

		
		
		
    
  
  else if(n==3)
  {
  	cout<<"EXIT"<<endl;
  }
  
system("pause");
return 0;
}
