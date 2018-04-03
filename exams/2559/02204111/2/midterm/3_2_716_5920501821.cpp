#include<iostream>//5920501821 Benjamas Poktang
using namespace std;
int main()
{
	float a,b,c,d,e,;
	cout<<"Enter electricity cost per unit(baths):";
	cin>>a;
	while (a<=0)
	{
	cout<<"Enter electricity cost per unit(baths):";
	cin>>a;

    }
	do
	   
	   {
	    {
	    cout<<"Enter last unit :";
		cin>>b;
		if(b<0||b>100000)
		{
		cout<<"Invalid last unit"<<endl;
		break;
        }
		else if(b>=0)
		{
		cout<<"Enter current unit :";
		cin>>c;
		else if(c<0)
		{
		cout<<"Invalid last unit"<<endl;
		break;
	    }
		else
		d=c-b;
		cout<<"Units used ="<<d<<endl;
		cout<<"Electricity charge (baths) ="<<e=d*a<<endl;
	    }
	}
}
    while !(b=-1||c=-1);
    cout<<"--End of calculation--"<<endl;
	
	cout<<"Total of Electricity charge (baths)="<<sum=sum+e;
	
	system("pause");
	return 0;
}
	
