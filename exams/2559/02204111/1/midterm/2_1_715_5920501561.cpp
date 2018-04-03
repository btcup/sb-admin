// 5920501561 Namphon chanclongmai
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double n,a,r,x; 
cout<<"Enter n,a and r";
cin>>n>>a>>r; 

while ( r==0||a==0||n<=0 )
{  cout<<"Enter n,a and r";
	cin>>n>>a>>r;
if (n<=0) {cout << " n cannot be negative or zero";
			}
 if (a==0||r==0) {cout<< " a and r cannot be zero";
}
 }							
cout <<"The geometric progression of n = "<<n<<",a ="<<a<<",r ="<<r<< " is"<<endl; 
 int i=0;
 double sum=0;
 while(i<n){ x=a*(pow(r,i));
 i++ ;
 cout<<x<<" ";
 sum =sum+x; }
 cout<<endl; 
 cout <<"sum = " << sum<< endl;

system ("pause");	
return 0;

}

