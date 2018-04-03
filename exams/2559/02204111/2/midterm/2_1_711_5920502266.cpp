//5920502266 Jirada Ngamchantuk
#include <iostream>
using namespace std;
int main()
{
	char m ,c,car ;
	float s,y,f,a,mp,b;
	cout << " Car lease calculator" <<endl;
	cout << "Enter car model :";
	cin >>m,c ;
	{
	switch (car)
	case 1: cout<< "accord";
	cout <<a<<1385000 <<b<<endl;break;
	case 2:cout<< "Brio";
	cout <<a<<511500<<b<<1.79<<endl;break;
	case 3:cout<<"City";
	cout <<a<<738000<<b<<1.99<<endl;break;
	case 4:cout<<"Jazz";
	cout <<a<<694000<<b<<1.99<<endl;break;
    }
	 
 	cout<<"Enter number of years (1-6) :"<<endl;
	cin >> y;
	cout<<"Enter your salary : " <<endl;
	cin>>s;
	cout <<"Financing amount : "<<endl;
	cin>>f;
	cout <<"Amount of inyerest :"<<endl;
	cin>>a;
	cout <<"Mouthly paymrnt :"<<endl;
	cin>>mp;
	if (mp >s/2)
	cout <<"The monthly paymentis over than 50% of your salary!!"<<endl;
	if (mp<=s/2)
	cout <<"Good decision,Enjoy your new car"<<endl;
	
	system ("pause");
	return 0;
}
