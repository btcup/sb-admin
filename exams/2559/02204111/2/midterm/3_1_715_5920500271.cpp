//5920500271 Chaloemphong Srattharungruang
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float t1,t2;
	int a,b,c,d,e,f,g,h,i,j,k,l,sum;
	cout<<"Arrrival time : ";
	cin >> t1;
	cout << "Leave time : ";
	cin >> t2;
	a=int(t1*100)%100;
	b=int(t2*100)%100;
	c=t1*60;
	d=t2*60;
	e=a+c;
	f=b+d;
	g=f-e;
	h=g/60;
	i=int (g)%60;
    cout <<endl;
    if (g<0)
    cout << "You can't leave defore arrival time ";
	if (g>0)
	cout << h <<"hours and "<< i << "minutes"<<endl;
	{if (g>0 && g<=195)
	sum=0;
	if (g>195&& g<=375)
	{if(i>15)
	 sum = ((g-180)/60)*20+20;
	 else 
	 sum = ((g-180)/60)*20;
	 }
	 	if (g>375&& g<=495)
	{if(i>15)
	 sum = 60+((g-360)/60)*50+60;
	 else 
	 sum =60+ ((g-360)/60)*50;
	 }
	 
	 if (g>=496)
    sum = 500;
	}
	
    cout << "You have yo pay " << sum <<" bath "<<endl;
return 0;
}
