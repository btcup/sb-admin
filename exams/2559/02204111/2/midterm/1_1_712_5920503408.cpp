//5920503408 Tawan Trikool
#include<iostream>
using namespace std;
int main(){
	int year;
	double a,b,c,d,e;
	char car;
	cout<<"------- Car lease calculator -------"<<endl;
	cout<<"Enter car model:";
	cin>>car;
	if(car=='A'||car=='a'||car=='B'||car=='b'||car=='C'||car=='c'){
	cout<<"Enter number of years(1-6);";
	cin>>year;
	if(year>0&&year<=6){
		if(car=='C'||car=='c'){
		e=(1.99)/100;
		if(year<4)
		e=e-(0.1/100);
		cout<<"Enter percentage of down payment:";
		cin>>d;
		a=(738000*d)/100;
		b=738000-a;
		cout<<"---------------------------------"<<endl;
		cout<<"Finacing amount: "<<b<<endl;
		cout<<"Amount of interest: "<<(b*e*year)<<endl;
		cout<<"Monthly payment: "<<(b+b*e*year)/(year*12)<<endl;
	}
	else if(car=='A'||car=='a'){
		e=2.09/100;
		if(year<4)
		e=e-(0.1/100);
		cout<<"Enter percentage of down payment:";
		cin>>d;
		a=(1385000*d)/100;
		b=1385000-a;
		cout<<"---------------------------------"<<endl;
		cout<<"Finacing amount: "<<b<<endl;
		cout<<"Amount of interest: "<<(b*e*year)<<endl;
		cout<<"Monthly payment: "<<(b+b*e*year)/(year*12)<<endl;
	}
	else if(car=='B'||car=='b'){
		e=1.79/100;
		if(year<4)
		e=e-(0.1/100);
		cout<<"Enter percentage of down payment:";
		cin>>d;
		a=(511500*d)/100;
		b=511500-a;
		cout<<"---------------------------------"<<endl;
		cout<<"Finacing amount: "<<b<<endl;
		cout<<"Amount of interest: "<<(b*e*year)<<endl;
		cout<<"Monthly payment: "<<(b+b*e*year)/(year*12)<<endl;
	}
	else if(car=='J'||car=='j'){
		e=1.99/100;
		if(year<4)
		e=e-(0.1/100);
		cout<<"Enter percentage of down payment:";
		cin>>d;
		a=(694000*d)/100;
		b=694000-a;
		cout<<"---------------------------------"<<endl;
		cout<<"Finacing amount: "<<b<<endl;
		cout<<"Amount of interest: "<<(b*e*year)<<endl;
		cout<<"Monthly payment: "<<(b+b*e*year)/(year*12)<<endl;
	}
	}
	else
	cout<<"Error!, number of years is not in rang"<<endl;
} else
cout<<"not car"<<endl;
	system("pause");
	return 0;
}
