//5920503408 Tawan Trikool
#include<iostream>
using namespace std;
int main(){
	int n,i,a;
	i=2;
	a=0;
	cout<<"Enter N: ";
	cin>>n;
	while(n<0){
	cout<<"Enter N: ";
	cin>>n;
	}
	a=n;
	cout<<"The greatest factor of "<<n;
	while(a>=i){
		while(a%i==0){
		a=a/i;
	}
	if(a>1)
	 i++;
	}
	cout<<" is "<<i;
	if(n==i)
	cout<<" ------> prime number"<<endl;
	system("pause");
	return 0;
}
