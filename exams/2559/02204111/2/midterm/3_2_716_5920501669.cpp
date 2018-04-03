// Rachanon Roengkitpaisan 5920501669
#include <iostream>
using namespace std;
int main()
{
	double u,lu,cu,uu,ec,tec=0;
	do
	{
	cout<<"Enter electricity cost per unit (bahts) : "; cin>>u;
	}
	while(u<=0);
	cout<<endl;


	do
	{
	do
		{
	cout<<"Enter last unit : "; cin>>lu;
	if(lu==-1)
	break;
	
	if(lu<0||lu>=10000)
	cout<<"Invalid last unit!"<<endl;
		}
		while(lu<0);	
	
		
	cout<<"Enter current unit : "; cin>>cu;
	if (cu==-1)
	break;
	
	if(cu<0||uu<0||cu>=10000)
	cout<<"Invalid current unit!"<<endl;
	else
	{
	uu=cu-lu;
	ec=uu*u;
	cout<<"Unit used = "<<uu<<endl;
	cout<<"Electricity charge (bahts) = "<<ec<<endl;
	tec= tec+ec;
	}
	}
	while (lu<0||cu<0||cu-lu<0||lu!=-1||cu!=-1);


	cout<<"-- End of Calculation --"<<endl;
	cout<<endl;
	
	cout<<"Total of Electricity charge (baths) = "<<tec<<endl;
	return 0;
}
