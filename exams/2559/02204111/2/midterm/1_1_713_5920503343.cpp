//5920503343 Anchalee chachot
#include<iostream>
using namespace std;
int main()
{
	char model;
	float x,y;
	cout<<"-------Car lease calculator-----------"<<endl;
	cout<<"Enter car model: ";
	cin>>model;
    cout<<"Enter number of year (1-6): ";
    cin>>x;
		if(x>=1&&x<=6){
			cout<<"Entre percentage of dow payment : ";
			cin>>y;
			if(model=='C'){
			cout<<"Financing amount: "<<(738000-(738000*(y/100)))<<endl;
			  if(x<4){
			     cout<<"Amount of interest: "<<(738000-(738000*(y/100)))*((1.89/100)*x)<<endl;
		         cout<<"Monthly payment: "<<((738000-(738000*(y/100)))+(738000-(738000*(y/100)))*((1.89/100)*x))/(x*12)<<endl;
			  }
			  else
			     cout<<"Amount of interest: "<<(738000-(738000*(y/100)))*((1.99/100)*x)<<endl;
			     cout<<"Monthly payment: "<<((738000-(738000*(y/100)))+(738000-(738000*(y/100)))*((1.99/100)*x))/(x*12)<<endl;
			}
			if(model=='A'){
			cout<<"Financing amount: "<<(1385000-(1385000*(y/100)))<<endl;
			  if(x<4){
			     cout<<"Amount of interest: "<<(1385000-(1385000*(y/100)))*((1.99/100)*(0.1/100)*x)<<endl;
				 cout<<"Monthly payment: "<<((738000-(738000*(y/100)))+(738000-(738000*(y/100)))*((1.99/100)*x))/(x*12)<<endl;	
			  }
			  else
			     cout<<"Amount of interest: "<<(1385000-(1385000*(y/100)))*((2.09/100)*x)<<endl;
			     cout<<"Monthly payment: "<<((1385000-(1385000*(y/100)))+(1385000-(1385000*(y/100)))*((2.09/100)*x))/(x*12)<<endl;
				
			}
			if(model=='B'){
			cout<<"Financing amount: "<<(511500-(511500*(y/100)))<<endl;
			  if(x<4){
			     cout<<"Amount of interest: "<<(511500-(511500*(y/100)))*((1.69/100)*(0.1/100)*x)<<endl;
				 cout<<"Monthly payment: "<<((738000-(738000*(y/100)))+(738000-(738000*(y/100)))*((1.69/100)*x))/(x*12)<<endl;	
			  }
			  else
			     cout<<"Amount of interest: "<<(511500-(511500*(y/100)))*((1.79/100)*x)<<endl;
			     cout<<"Monthly payment: "<<((511500-(511500*(y/100)))+(511500-(511500*(y/100)))*((1.79/100)*x))/(x*12)<<endl;
			}
			if(model=='J'){
			cout<<"Financing amount: "<<(694000-(694000*(y/100)))<<endl;
			  if(x<4){
			     cout<<"Amount of interest: "<<(694000-(694000*(y/100)))*((1.89/100)*(0.1/100)*x)<<endl;
				 cout<<"Monthly payment: "<<((738000-(738000*(y/100)))+(738000-(738000*(y/100)))*((1.89/100)*x))/(x*12)<<endl;	
			  }
			  else
			     cout<<"Amount of interest: "<<(694000-(694000*(y/100)))*((1.99/100)*x)<<endl;
			     cout<<"Monthly payment: "<<((694000-(694000*(y/100)))+(694000-(694000*(y/100)))*((1.99/100)*x))/(x*12)<<endl;
			}
			
		}
		else
		    cout<<"Error!, number of year is not in rang"<<endl;
		    
system("pause");
return 0;	
}
