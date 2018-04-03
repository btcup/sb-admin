#include <iostream>
using namespace std;
int main()
{
	char a,b;
	float c,d,e;
	while(1)
	{
		cout<<"Enter objective (Living,agriculture) :";
		cin>>a;
		if(a=='L')
		{
			cout<<"Enter living type (Main,Second) :";
			cin>>b;
			if(b=='M')
			{
				cout<<"Enter land cost (million) :";
				cin>>c;
				cout<<"Enter building cost (million) :";
				cin>>d;
				cout<<"Building age :";
				
			}
		          else if(b=='S')
		          {
		          cout<<"Enter land cost (million) :";
				cin>>c;
				cout<<"Enter building cost (million) :";
				cin>>d;
				cout<<"Building age :";	
		          }
			
		}
		else if(a=='A')
		{
		cout<<"Enter land cost (million) :";
				cin>>c;
					
		}
	}
		system("pause");
	return 0;
}
