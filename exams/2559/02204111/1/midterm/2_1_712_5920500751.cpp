#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
int i;
float sum,n,a,r,x,y;
i=0;
sum=1;
//5920500751 Theerapong Juntaruksa
cout<<"Enter n ,a and r : ";
cin>>n>>a>>r;
cout<<"The geometic progression of n="<<n<<" a="<<a<<" r="<<r<<endl;
while(i<n)
          {	
		  
          	x=a*r;
      x=x*r;
           sum=sum*x;
			          	cout<<a<<" "<<sum<<" ";
             i++;
          	
          }
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
