//5920502941 surapat 
#include<iostream>
using namespace std;
int main()
{
	string x=" ",y="the",z="T",g="ed";
	string a,b,c,d;
	cout<<"Please input your sentence: ";
	getline (cin,a,'\n');
	int n=a.find(x,0),m,i,j;
	b=a.substr(0,a.find(x,0));
	c=a.substr(a.find(x,0)+1,a.find(x,n+1));
	d=a.substr(a.find(x,a.find(x,0)+1)+1,a.length());
	d.replace(0,1,z);
	d.erase(d.length()-1,1);
	c.erase(c.length()-((d.length()+1)/2),((d.length()+1)/2));
	cout<<endl;
	if(a.find(y,0)!=-1)
	{
		cout<<"passive : " <<d<<" is "<<c<<"ed by "<<b<<". "<<endl;
	}else
	{
		cout<<"Error: Hot pReaent simple tense.";
	}
	return 0;
}
