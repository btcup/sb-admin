#include<iostream>
using namespace std;
int main()
{
	int y,p,pay;
	char m;
	cout<<"Are you member (Y or N) : ";
	cin>>m;
	cout<<"How old are you? : ";
	cin>>y;
	cout<<"Normal price : ";
	cin>>p;
	if(m=='Y')
	{
		if(y<2)
		pay=0;
		else if((y>=2)&&(y<=12))
		pay=p-(0.7*p);
		else
		pay=p-(0.5*p);
	}
	else if(m=='N')
	{
		if(y<2)
		pay=0;
		else if((y>=2)&&(y<=10))
		pay=p-(0.5*p);
		else
		pay=p;
	 } 
	 cout<<"You have to pay "<<pay<<endl;
	system("pause");
	return 0;
}
