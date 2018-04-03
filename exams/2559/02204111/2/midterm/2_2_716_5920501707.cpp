//5920501707Wilasinee Satpiyatham
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int N,n;
double n1,n2,n3,n4,n5;
cout<<"Enter an integer: ";
cin>>N;
if(N%100000>10000)
n=5;
else if(N%10000>1000)
n=4;
else if(N%1000>100)
n=3;
else if (N%100>10)
n=2;
else
n=1;
cout<<"number of digit is "<<n<<endl;
n1=N/1000;
n2=N%1000/100;
n3=N%1000%100/10;
n4=N%1000%100%10;
if(N == pow(n1,n)+pow(n2,n)+pow(n3,n)+pow(n4,n)+pow(n5,n))
cout<<N<<" is a targer number."<<endl;
else
cout<<N<<" is not a targer number."<<endl;
system("pause");
return 0;
}
