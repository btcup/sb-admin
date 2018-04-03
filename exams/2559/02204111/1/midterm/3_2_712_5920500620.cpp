//5920500620 Kittipit Patthamalangkul

#include <cmath>
#include <iostream>
using namespace std;
int main() {
	
double a,b,c,x,y,z,w,k;
	
	cout<<"Enter coefficients a, b and c: ";
	cin>>a>>b>>c;

	
	x==pow(b,2)-4*a*c;
	y==(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	z==-b/(2*a)+((sqrt(-x))/2*a);
	w==(-b-sqrt(pow(b,2)-4*a*c))/2*a;
	k==-b/(2*a)-((sqrt(-x))/2*a);
	
	if(x==0) {
	cout<<"Roots are real and same."<<endl; cout<<"x1 = x2 = "<<y<<endl;
    }
    
    if(x>0)  {
	cout<<"Roots are real and different."<<endl; cout<<"x1 = "<<y<<endl; cout<<"x2 = "<<w<<endl;
    }
    
	if(x<0) {
	cout<<"Roots are complex and different."<<endl; cout<<"x1 = "<<z<<endl; cout<<"x2 = "<<k<<endl;
	} 
	
	
	system ("pause");
	return 0;
}
