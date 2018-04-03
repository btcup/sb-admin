#include<iostream>
using namespace std;
int main()
{
	
	char objective,type;
	float cost,cost2,wat;
	int age;
	if(1<age<15)
	wat=age*1.2;
	if(16<age<40)
	wat=((age-15)*2.5/100)+((age-2)*1.2/100)*100/100;
	if(age>40)
	wat=age*65;
	cout<<"Enter objective (Living, Agriculture) :";
	cin>>objective;
	
	if(objective=='L')
	{

	cout<<"Enter living type (Main,Second) :";
	cin>>type;
	cout<<"Enter land cost (million) :";
	cin>>cost;
	cout<<"Enter building cost (million) :";
	cin>>cost2;
	cout<<"Building age :";
	cin>>age;
	
		if(type=='M')
		{
			if(cost+cost2<50)
			{
				
			cout<<"Your estate cost is"<<cost+cost2<<"("<<cost<<"+"<<cost2<<") million bath"<<endl;
			cout<<"The land tax is 0 bath"<<endl;
			}
			else if(50<cost+cost2<100)
			{
			cout<<"Your estate cost is"<<cost+cost2-cost2*wat<<"("<<cost<<"+"<<cost2-cost2*wat<<")million bath"<<endl;
			cout<<"The land tax is"<<(cost+cost2-cost2*wat)*0.06/100<<"million bath"<<endl;
			}
			else if(cost+cost2>=100)
			{
			cout<<"Your estate cost is"<<cost+cost2-cost2*wat<<"("<<cost<<"+"<<cost2-cost2*wat<<") million bath"<<endl;
			cout<<"The land tax is"<<(cost+cost+cost2-cost2*wat)*0.12/100<<"million bath";
			}
		}
		else if(type=='S')
			if(cost+cost2<5)
			{
			cout<<"Your estate cost is"<<cost+cost+cost2-cost2*wat<<"("<<cost<<"+"<<cost2-cost2*wat<<") million bath";
			cout<<"The land tax is"<<(cost+cost+cost2-cost2*wat)*0.3/100<<"million bath";
			}
			else if(5<cost+cost2<10)
			{
			cout<<"Your estate cost is"<<cost+cost+cost2-cost2*wat<<"("<<cost<<"+"<<cost2-cost2*wat<<") million bath";
			cout<<"The land tax is"<<(cost+cost+cost2-cost2*wat)*0.6/100<<"million bath";
			}
			else if(cost+cost2>=10)
			{
			cout<<"Your estate cost is"<<cost+cost+cost2-cost2*wat<<"("<<cost<<"+"<<cost2-cost2*wat<<") million bath";
			cout<<"The land tax is"<<(cost+cost+cost2-cost2*wat)*0.9/100<<"million bath";
			}
	}

	if(objective=='A')
	{
	
	cout<<"Enter land cost (million) :";
	cin>>cost;
	cout<<"Enter building cost (million) :";
	cin>>cost2;
		if(cost+cost2<40)
			{
			cout<<"Your estate cost is"<<cost+cost2<<"("<<cost<<"+"<<cost2<<") million bath";
			cout<<"The land tax is 0 bath";
			}
			else if(40<cost+cost2<80)
			{
			cout<<"Your estate cost is"<<cost+cost2<<"("<<cost<<"+"<<cost2<<") million bath";
			cout<<"The land tax is"<<(cost+cost2)*0.04/100<<"million bath";
			}
			else if(cost+cost2>=80)
			{
			cout<<"Your estate cost is"<<cost+cost2<<"("<<cost<<"+"<<cost2<<") million bath";
			cout<<"The land tax is"<<(cost+cost2)*0.08/100<<"million bath";
			}
	}
	system("pause");
	return 0;
}
//5920500883 Supachai Dentrirat
