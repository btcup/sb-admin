//5620551458 Puntip Sukpleian
#include<iostream>
#include<cmath>
using namespace std;
int main()

{

	float a,b,c,x,y,z,v,i,f,d;
	cout<<"Enter coefficients a, b and c :" ;
	cin>>a >>b >>c ;
	
			x=-b+(pow(pow(b,2)-4*a*c,0.5)/2.0*a);
			y=-b-(pow(pow(b,2)-4*a*c,0.5)/2.0*a);
			z=-b+(pow(pow(b,2)-4*a*c,0.5)/2.0*a);
			v=-b+(pow(pow(b,2)-4*a*c,0.5)/2.0*a);
			f=(-b/2.0*a)+((-(b*b-4*a*c))/2.0*a);
			d=(-b/2.0*a)-((-(b*b-4*a*c))/2.0*a);
if(x<-0 && y<-0){

			
		cout<<"Roots are real and different."<<endl;
		cout<<"x1 = "<<x<<endl;
		cout<<"x2 = "<<y<<endl;
}
	
else if (z==v){
	
		cout<<"Roots are real and same."<<endl;
		cout<<"x1 = "<<z<<endl;
		cout<<"x2 = "<<v<<endl;
}

else {
	cout<<"Roots are complex and different."<<endl;
		cout<<"x1 = "<<f<<endl;
		cout<<"x2 = "<<d<<endl;
}
	

	system ("pause");
	return 0;
}


