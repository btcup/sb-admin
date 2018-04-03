//5920501863 Noah Penpetch
#include<iostream>
using namespace std;
int main ()
{
	char type;
	int time,H;
	float A,L,M;
	cout<<"Type of vehicle ((C) Car or (M)Motorcycle : ";
	cin>>type;
	cout<<"Arrival time :";
	cin>>A;
	cout<<"Leave time : ";
	cin>>L;
	H=L-A;
	M=(float(L-A)-int(H))*100;
	if(A>L)
	{
		cout<<"You can't leave before arrival time"<<endl; 
	}
	
	cout<<(H)<<" hour and "<<(M)<<" minutes"<<endl;
	if(type=='C')
	{
		if (H<=2)
		cout<<"You have to pay 0 bath"<<endl;
		else if (H>=3&&H<=5)
		cout<<"You have to pay "<<((H*30)-110)<<" bath"<<endl;
		else if (H>=6&&H<8)
		cout<<"You have to pay "<<((H*50))-110<<" bath"<<endl;
		else 
		cout<<"You have to pay 500 bath"<<endl;
	}
	else if(type=='M')
	{
		if (H<=3)
		cout<<"You have to pay 0 bath"<<endl;
		else if (H>=4&&H<=7)
		cout<<"You have to pay "<<(H*10)<<" bath"<<endl;
		else if (H>7)
		cout<<"You have to pay 150 bath "<<endl;
		else 
		cout<<"You can't leave before arrival time"<<endl;
	}
	system ("pause");
	return 0;
}
