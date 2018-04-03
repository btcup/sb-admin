#include<iostream>//5920500824 Panuwat Soponvanit
using namespace std;
void ToPassive(string a)
{
	string a1,a2,a3;
	int i=1,j,k,n,m;
	n = a.find(" ",0);
	a1=a.substr(0,n);
	k = a.find(" ",n+1);
	a2=a.substr(n+1,k-n);
	m = a.find(".",k);
	a3=a.substr(k+1,m-1);
	n = a2.find("s",0);
	j=a2.length();
	a2= a2.erase(j-2,2);
	a3= a3.erase(0,1);
	cout<<"passive : "<<"T"+a3+" is "+a2+"ed"+" by "+a1+".\n";
}
int main()
{	string s;
	int i,j,k,m,o,p,n;
cout<<"Please input your sentence: ";
getline(cin,s,'.');
	p=s.find("ed",p);
		if	(p>=1)
		{ cout<<"Error: Not present simple tense.\n";
		}
		else if (p = -1 )
		ToPassive(s);
	
	system("pause");
	return 0;
}

