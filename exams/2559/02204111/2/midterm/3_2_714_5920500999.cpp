//5920500999 Khwanklao Baibua
#include <iostream>
using namespace std;
int main()
{
	double electricity,last,current,used,charge;
	cout<<"Enter electricity cost pre unit (bahts): ";
	cin>>electricity;
	while(electricity<=0)
	{
	cout<<"Enter electricity cost pre unit (bahts): ";
	cin>>electricity;
    }
    cout<<endl;
	cout<<"Enter last unit: ";
	cin>>last;
	while(last>=0)
	{
	cout<<"Enter current unit: ";
	cin>>current;
	used=current-last;
	cout<<"Units used = "<<used<<endl;
	charge=electricity*used;
	cout<<"Electricity charge (bahts) = "<<charge<<endl;
	cout<<endl;
	}
	cout<<"Invalid last unit!"<<endl;
	system ("pause");
	return 0;
}
