#include<iostream>  //5620500527 jirapat pojjariyaporn
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,i;
    double x1,x2,x;
	cout<<"Enter coefficients a,b and c :";
	cin>>a>>b>>c;
	x=(pow(b,2)-4*a*c);
	if(x>0&&x!=0);
	{
	
	cout<<"Roots are real and differnt."<<endl;
		    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			cout<<"x1 = "<<x1<<endl;
			x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	        cout<<"x2 = "<<x2<<endl;
	}
	     if(x==0);
    {
    
	    cout<<"Roots are real and same."<<endl;
	          x1=x2=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	          cout<<"x1=x2= "<<x1<<endl;
    
	} 
	   if(x!=0&&x<0);
	{
	    cout<<"Roots are complex and different."<<endl;
	           x1=-b/(2*a)+(((sqrt(-(pow(b,2)-4*a*c))))/(2*a))*i;
	    cout<<"x1 = "<<x1<<endl;
	        x2=-b/(2*a)-(((sqrt(-(pow(b,2)-4*a*c))))/(2*a))*i;
	    cout<<"x2 = "<<x2<<endl;
    }
    
	system ("pause");
	return 0;
}
