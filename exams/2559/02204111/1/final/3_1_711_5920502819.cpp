#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void mySearch(string s,string k)
{
	int a,b,t,b1,n,z=0,A,c;
	string k1,A1,B1;
	b=k.find("*",0);
	if(b==0)
	{
		cout<<"Incorrect keyword!"<<endl;
	}
	else if(b==-1)
	{
		a=s.size();
		t=s.find(k,0);
		if(t!=-1)
		{
			cout<<"'"<<k<<"'"<<"is in above text"<<endl;
		}
		else if(t==-1)
		{
			cout<<"'"<<k<<"'"<<"is not in above text"<<endl;
		}
	}
}
int main()
{
	string S,K;
	cout<<"Enter text :";
	getline(cin,S,'.');
	cout<<"Enter keyword :";
	cin>>K;
	mySearch(S,K);
system("pause");
return 0;	
}
