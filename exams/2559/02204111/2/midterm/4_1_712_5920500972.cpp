//5920500972 Ausadayud Thongmak
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x,y,sum,minutes;
	int hours;
	char n;
	cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
	cin>>n;
	cout<<"Arrival time : ";
	cin>>x;
	cout<<"Leave time : ";
	cin>>y;
	sum=y-x;
		hours=int(y)-int(x);
		minutes=abs(abs((sum-hours)*100)-30);
	if(n=='C')
	{
		if(sum>=0&&sum<=2){
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
		}
		else if(sum>=3&&sum<5){
			cout<<hours-1<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay"<<(hours)*30<<"bath"<<endl;
		}
		else if(sum>=6&&sum<=8){
			cout<<hours-1<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay "<<(hours)*50<<" bath"<<endl;
		}
		else if(sum<0)
	    cout<<"You can't leave before arrival time "<<endl;
		else{
		cout<<hours-1<<" hours and "<<minutes+30<<" minutes"<<endl;
		cout<<"you have to pay 500 bath "<<endl;}
	    	
	}
	else if(n=='M')	{
		if(sum>=0&&sum<=3){
			cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
			cout<<"You have to pay 0 bath"<<endl;
		}
		else if(sum>=4&&sum<=7){
			cout<<hours+1<<" hours and "<<minutes-30<<" minutes"<<endl;
			cout<<"You have to pay "<<(hours)*10<<" bath"<<endl;
		}
		else if(sum<0)
	    cout<<"You can't leave before arrival time "<<endl;
		else{
		cout<<hours-1<<" hours and "<<minutes<<" minutes"<<endl;
		cout<<"you have to pay 150 bath "<<endl;}
	}
	

	system("pause");
	return 0;
}
