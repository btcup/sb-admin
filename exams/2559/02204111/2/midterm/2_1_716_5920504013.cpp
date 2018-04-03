// 5920504013 Priyaporn Doungmalai
#include <iostream>
using namespace std;
int main()
{
	int y,s;
	float finan,amount,monthly;

	char m;
	cout<<"-----Car lease calulator--------"<<endl;
	cout<<"Enter car model: ";
	cin>>m;
	cout<<"Enter number of years (1-6):";
	cin>>y;
	cout<<"Enter your salary:";
	cin>>s;
	cout<<"------------------------"<<endl;
	if(m == 'A')
	{
	finan=1385000-((25/100.0)*1385000);
	cout<<"Financing amount:"<<finan<<endl;
	amount=finan*(2.09*0.01)*y;
	cout<<"Amount of interest:"<<amount<<endl;
	monthly=(finan+amount)/(y*1.0);
	cout<<"Monthly payment:"<<monthly/y<<endl;
		if (monthly>(s/2.0))
		cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		if (monthly<= (s/2.0))
		cout<<"Good decision, Enjoy your new car"<<endl;
	
	}
	if(m == 'B')
	{
	finan=511500-((25/100.0)*511500);
	cout<<"Financing amount:"<<finan<<endl;
	amount=finan*(1.79*0.01)*y;
	cout<<"Amount of interest:"<<amount<<endl;
	monthly=(finan+(amount/y));
	cout<<"Monthly payment:"<<monthly<<endl;
		if (monthly>(s/2.0))
		cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		if (monthly<= (s/2.0))
		cout<<"Good decision, Enjoy your new car"<<endl;
		
	}
	if(m == 'C')
	{
	finan=738000-((25/100.0)*738000);
	cout<<"Financing amount:"<<finan<<endl;
	amount=finan*(1.99*0.01)*y;
	cout<<"Amount of interest:"<<amount<<endl;
	monthly=(finan+amount)/y;
	cout<<"Monthly pay ment:"<<monthly<<endl;
		if (monthly>(s/2.0))
		cout<<"The monthlypayment is over than 50% of your salary!!"<<endl;
		if (monthly<= (s/2.0))
		cout<<"Good decision, Enjoy your new car"<<endl;
	
	}
	if(m == 'J')
	{
	finan=694000-((25/100.0)*694000);
	cout<<"Financing amount:"<<finan<<endl;
	amount=finan*(1.99*0.01)*y;
	cout<<"Amount of interest:"<<amount<<endl;
	monthly=(finan+amount)/y;
	cout<<"Monthly pay ment:"<<monthly<<endl;
		if (monthly>(s/2.0))
		cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
		if (monthly<= (s/2.0))
		cout<<"Good decision, Enjoy your new car"<<endl;
		
	}
		
	
	system ("pause");
	return 0;
}
