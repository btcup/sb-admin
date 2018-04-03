#include<iostream>
using namespace std;
int main()
{
 	int n,i,m,j,t;
 	
 	cout<<"Enter a positive integer : ";
 	cin>>n;
 	
 	if(n>0)
	 {
 		i=0;
 	
 		do
		{
			
			n=n/10;
			i++;		
		}
		while(n>0);

	cout<<"\n\n";
 	cout<<"Number of digit is "<<i<<endl;
 	cout<<"Factor of "<<n<<" are : \n";
 	
 	j=1;
 	
 	do
	 {
 		
 		{
			m=m/j;
			cout<<j<<" * "<<(m)<<endl;	
			j++;
		}
		
		j++;
	}
	while(j<1);
}
else
{cout<<"Invalid number !!\n";}
 	
 	
 	
 	
 		 
		  
	system("pause");
	return 0;	  
}