//5920551551 Wongsakron Simma
#include <iostream>
#include <cmath>
using namespace std;
main ()
{ 		char type;
		float in,out;
		float money;
		int	 hours,minute,minute1,minute2;
	cout<<"type of vehicle ( (C)Car or (M)Motorcycle ) :";
	cin>>type;
	cout<<"Arrival time : ";
	cin>>in;
	cout<<"Leave time :";
	cin>>out;
	hours= out-in;
	minute= (out-in)*100;
	minute= (minute%100);
	minute1=in*100;
	minute1=minute1%100;
	minute2=out*100;
	minute2=minute2%100;
	if (minute1>minute2)
	{ minute = 60-(minute1-minute2);
	}
	if (minute>=0)
	{
	
		if(type=='C')
	{
	if(hours<=2)
	money=0;
	else if (hours>=3&&hours<=5)
	money=(hours-2)*30;
	else if (hours>=6&&hours<=8)
	money=90+((hours-4)*50);
	else
	money=500;
	}
	
		if(type=='M')
	{
	if(hours<=3)
	money=0;
	else if (hours>=4&&hours<=7)
	money=(hours-3)*10;
	else
	money=150;
	}
	cout<<hours<<" hours and "<<minute<<" minutes"<<endl;
	cout<<"you have to pay "<<money<<" bath";
}
else
 cout<<"you can't leave before arrival time";
return 0;
system ("pause");
}
