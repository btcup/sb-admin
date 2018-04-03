#include<isostream>
#include<cmath>
using namespace std;
int main();
{
	double a,b,sum;
	char A;
	cout<<"Are you member (Y or N) :";
	cin>>A;
	cout<<"How old are you? :";
	cin>>a;
	cout<<"Normal price :";
	cin>>b;
	if(A=='Y'&&a<2){
		sum=b/100*100;
		cout<<"You have to pay   "<<sum;
	}
		else if(A=='Y'&&a>=2&&a<12){
		sum=b/100*70;
		cout<<"You have to pay   "<<sum;
	}
		else if(A=='Y'&&a>=12){
		sum=b/100*50;
		cout<<"You have to pay   "<<sum;
	}
		else if(A=='N'&&a<2){
		sum=b/100*100;
		cout<<"You have to pay   "<<sum;
	}
		else if(A=='N'&&a<=2&&a<12){
		sum=b/100*50;
		cout<<"You have to pay   "<<sum;
	}
		else(A=='N'&&a>12)
		sum=b;
		cout<<"You have to pay   "<<sum;

	system("pause");
	return 0;
}


