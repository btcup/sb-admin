//5920501804 Andaman Pankaew
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ float at,lt,t,m,a;
int hr;
char type;
int pay;
cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
cin>>type;
cout<<"Arrival time : ";
cin>>at;
cout<<"Leave time : ";
cin>>lt;

	if(lt>at)
{	 
	m=((lt-int(lt))-(at-int(at)))*100;
	if(m>=0)
	{
		t=(lt*60)-(at*60);
	
		hr=t/60;
		m=m;
	}
	else 
	{
		t=(lt*60)-(at*60);

		hr=t/60;
		lt=lt-1;
		m=round(((lt-int(lt))*100+60)-(at-int(at))*100);
	}
	if(m>0)
	a=hr+1;
	else a=hr;
	if(type=='C')
	 if(hr<=2)
	
		pay=0;
	else	if (hr<=5)
		
			a=hr-2;
	else		if(a>0)
			
			pay=pay+a*30;
	else if(hr<=8)
				{
				
					pay=pay+a*50;
				}
	
	else pay=500;
	
	
	if(type=='M')
	
		if(hr<=3)
		{
			pay=0;
			if(hr<=7)
			{
				a=hr-3;
				pay=pay+a*10;
			}
		}
		else pay=150;
	
	cout<<hr<<" hours and "<<m<<" minutes\n";
	
	if(type=='C'&&hr>8)
	pay=pay;
	else{
	if(type=='M'&&hr>7)
	pay=150;
	
	
	
	
	cout<<"You have to pay "<<pay<<" bath\n";
}
}
else cout<<"You can't leave before arrival"<<endl;
	system("pause");
	return 0;
}
