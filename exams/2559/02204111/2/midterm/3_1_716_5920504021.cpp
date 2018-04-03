//5920504021 Sarita Mongkhol
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float t1 , t2 ;
 	int x , y ,t3;
	cout<<"Arrival time :";
	cin>>t1;
	cout<<"Leave time :";
	cin>>t2;
	x= 60-int((floor(t2)*60)+(int(t2*100)%100)-(floor(t1)*60)+(int(t1*100)%100))%60;
	if(t2-t1<=0)
		cout<< "You can't leave before arrival time";
		else
	{
	cout<<int(t2-t1)<<" hours and"<<x ;
			if(int(t2-t1)<4)
			cout<<"You have to pay 0 bath";
			else if (int(t2-t1)>=4&&int(t2-t1)<7)
			cout << "You have to pay "<<int(t2-t1)*20<<"bath";
			else if (int(t2-t1)>=7&&int(t2-t1)<8)
			cout << "You have to pay "<<int(t2-t1)*50<<"bath";
			else if (int(t2-t1)>=8)
			cout <<"You have to pay 500 bath";
		}
		


	system ("pause");
	return 0;
}
