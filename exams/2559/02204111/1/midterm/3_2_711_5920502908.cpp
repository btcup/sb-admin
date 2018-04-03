//5920502908 Withawat Sabayying Wat
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float b,a,c,x,y,z,i,k;
	cout<<"Enter coefficients a,b and c : ";
	cin>>a>>b>>c;
	x = pow(b,2)-(4*a*c);
	if(x>0){
	y = ((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a);
	z = ((-1*b)-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"Roots are complex and different."<<endl;
	cout<<"x1 = "<<y<<endl;
	cout<<"x2 = "<<z<<endl;
}
	else if(x==0)
	{
	y = ((-1*b)+sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"Roots are complex and different."<<endl;
	cout<<"x1 = x2 = "<<y<<endl;
}
	else
	{
		y = (((-1*b))/(2*a));
		i = sqrt((-1)*(pow(b,2)-4*a*c))/(2*a);
		z = (((-1*b))/(2*a));
		k = sqrt((-1)*(pow(b,2)-4*a*c))/(2*a);
			cout<<"Roots are complex and different."<<endl;
	cout<<"x1 = "<<y<<" + "<<i<<"i"<<endl;
	cout<<"x2 = "<<z<<" - "<<k<<"i"<<endl;
	}
		system ("pause");
	return 0;
}
