//  5920500875 Suphakarn Luangrangasi
#include<iostream>
#include<cmath>>
using namespace std;
int main()
{
	int x,i,sum,n;
	i=10; n=0; 
	do
	{
	
    	cout<<"inpue value : ";cin>>x;
    	
    	      		
    	if(x>=10)
    	{
    	cout<<"Invalid input!"<<endl;
    	continue;
        }
        else if(x<10&&x>=0)
         {if(n==0)
         sum=x;
         }
     	if(x<0)
    	break;
    	n++;
    }
	while(true);	
   
cout<<"your money is "<<sum*pow(10,n);
	
	
return 0;	
}
