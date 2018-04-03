//5820503619 Numfon  Sumnainglek
#include <iostream>
using namespace std;
int main ()
{	
int N,a,x,b;
sum=0;
cout<<"Enter a positive integer:";
cin>>N;
if(N>=0) 
{
         if(N%2==0)
        {
	     cout<<"Number of digit is 2"<<endl;
		 cout<<"Factor of "<<N<<"are:"<<endl;
		 for(a=1;a>=N;a=a++)
		 if(a%N==0)
		 sum=sum+1;
	    cout<<sum<<"*"<<b=N/a<<"="<<N<<endl;
	   
	   }
	   
	   else if(N%3==0)
	{
	cout<<"Number of digit is 1";
    cout<<"Factor of "<<N<<"are:";
    if(a%N==0)
	for(a=1;a%N>=1;a=a++)
    cout<<sum<<"*"<<N/a<<"="<<N<<endl;
    sum=sum+1;
    }
	else if(N%2!==0)
	{
	cout<<"Number of digit is 3";
    cout<<"Factor of "<<N<<"are:";
    if(N>0)
	for(a=1;a%N>=1;a=a++)
    cout<<sum<<"*"<<N/a<<"="<<N<<endl;
    sum=sum+1;
    }
    else if(N%2!==0)
	{
	cout<<"Number of digit is 4";
    cout<<"Factor of "<<N<<"are:";
    if(N>1000)
	for(a=1;a%N>=1;a=a++)
    cout<<sum<<"*"<<N/a<<"="<<N<<endl;
    sum=sum+1;
    }
      
}
else if(N<=0)
cout<<"Invalid number!!";


	system ("pause") ;
	return  0;	
}
