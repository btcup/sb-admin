#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double cost;
	int last,current,used,charge;
	do
	{
	cout<<"Enter electricity cost per unit (bahts):";
	cin>>cost;
	cout<<" "<<endl;
	cout<<"Enter last unit:";
	cin>>last;
	last--;
	cout<<"Enter current unti:";
	cin>>current;
	current--;
	used=current-last;
	cout<<"Units used ="<<used<<endl;
	charge=cost*used;
	cout<<"Electricity charge (Bath):"<<charge<<endl;
	last--;
	current--;
	
	}
	while(last<0&&current<0);
	{
		cout<<"--End of Calulation--"<<endl;
		cout<<" "<<endl;
		cout<<"Total of Electricity charge (bath)=";
	}
	system("pause");
	return 0;
	
}
