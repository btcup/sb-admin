//5920500212 Supakorn Ketpien
#include<iostream>
#include<cmath>
using namespace std;
int main()
{char a; float b,c,h=1,d; int e;
cout<<"Type of vehicle ((C)Car or (M) Motorcycle):";
	cin>>a;
	cout<<"Arrival time:";
	cin>>b;
	cout<<"Leave time:";
	cin>>c;
	d=c-b;int x=ceil(d);int y=int(c-b);
   	if(x>0){
	
	if(a=='C')
	{
   	
	if(x<=2) e=0; 
	else if(3<=x&&x<=5) e=x*30;
	else if(6<=x&&x<=8) e=30*3+(x-5)*50;
	else if(x>8) e=500; 
	cout<<y<<" hours and "<<h<<"minutes"<<endl<<"You have to pay"<<e<<"bath";
	}
	else if(a=='M')
	{

    if(x<=3) e=0;
	else if(4<=x&&x<=7) e=10*x;
	else if(x>7) e=150;
	cout<<y<<" hours and "<<h<<"minutes"<<endl<<"You have to pay"<<e<<"bath";
	}}else cout<<"You can't leave before arrival time";	

	
	
	
	

	
system("pause");	
	return 0;
}
