// 5920501464 Yasumin taitrawen 
#include <iostream>
using namespace std;
int main()
{
	float a,b,c,x1,x2,d;
	cout<<"Enter cofficients a,b and c:";
	cin>>a>>b>>c;
	cout<<endl;
	cout<<"Roots are real and different."<<endl;
	
	cout<<(d=(pow(b,2))-4*a*c);
	if(d>=0)
		{
			cout<<"x1 ="<<(x1=(-b+sqrt(pow(b,2))-4*a*c)/2*a);
			cout<<"x2 ="<<(x1=(-b+sqrt(pow(b,2))+4*a*c)/2*a);
		}
		else if (d=0)
			{
				cout<<"x1 = x2 ="<<((-b+(sqrt(pow(b,2))-4*a*c))/2*a);
				
			}
		else if (d<0)
			{
				cout<<"x1="<<((-b/2*a)+((sqrt-((pow(b,2)-4ac)))/2*a)*i);
				cout<<"x2="<<((-b/2*a)-((sqrt-((pow(b,2)-4ac)))/2*a)*i);
			}
	
	
	
	system ("pause");
	return 0;
}
	
