#include <iostream>
using namespace std;
int main()
{
	double l,c,t,a,b; 
	char o;
	cout<<"Enter objecttive (Living,Agriculture) : ";
	cin>>o;
	
	if(o == 'A')
	{
		cout<<"Enter land cost (million) : ";
		cin>>c;
		if (c < 40)
		{
		cout<<"You estate cost is "<<c<<" million baht.\n";
		cout<<"The land tax is exemption.";
		}
		else if (c = 40 && c <80)
		{
		cout<<"You estate cost is "<<c<<" million baht.";
		t = c*0.0004;
		cout<<"The land tax is "<<t<<" million baht.";
		}
		else if (c > 80)
		{
		cout<<"You estate cost is "<<c<<" million baht.";
		t = c*0.0008;
		cout<<"The land tax is "<<t<<" million baht.";
		}
	}
	
	if(o == 'L')
	{
		cout<<"Enter living type (Main,second) : ";
		cin>>l;
		if(l == 'M')
		{
			if (c < 50)
			cout<<"The land tax is exemption.";
			if (c == 50 && c < 100 )
			{
				if (a == 1 && a <= 15)
				{
				cout<<"Enter building cost (million) :";
				cin>>b;
				cout<<"Building age : ";
				cin>>a;	
				t = c*0.0006*0.012;
				cout<<"Your estate cost is "<<t<<" million baht.";
				}
				else if (a == 16 && a <= 40)
				{
				cout<<"Enter building cost (million) :";
				cin>>b;
				cout<<"Building age : ";
				cin>>a;	
				t = c*0.0006*0.025;
				cout<<"Your estate cost is "<<t<<" million baht.";
				}
				else if (a > 41)
				{
				cout<<"Enter building cost (million) :";
				cin>>b;
				cout<<"Building age : ";
				cin>>a;	
				t = c*0.0006*0.65;
				cout<<"Your estate cost is "<<t<<" million baht.";
				}
			}

		}
		
		
		
		
	}
	system ("pause");
	return 0;
}
