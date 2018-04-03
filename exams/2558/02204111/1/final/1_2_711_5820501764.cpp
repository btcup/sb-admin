#include <iostream>
using namespace std;
void changSentences (string &str)
{
	string a,A;
	a="abcdefghijklmnopqrstuvwxyz";
	A="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for(int i=0;i<26;i++)
	{
		if(str.substr(0,1)==a.substr(i,1)) str.replace(0,1,A.substr(i,1));
		
		
	}
	int n;
	n=str.find(". ",0)+2;
    for(int i=0;i<26;i++)
	{
		
		if(str.substr(n,1)==a.substr(i,1)) str.replace(n,1,A.substr(i,1));
		
		
	}
	n=str.find("?",0)+1;
    for(int i=0;i<26;i++)
	{
		
		if(str.substr(n,1)==a.substr(i,1)) str.replace(n,1,A.substr(i,1));
		
		
	}
	n=str.find("? ",0)+2;
    for(int i=0;i<26;i++)
	{
		
		if(str.substr(n,1)==a.substr(i,1)) str.replace(n,1,A.substr(i,1));
		
		
	}	
	
	cout<<str<<endl;
}
int main ()
{
	string str;
	cout<<"Input sentences: ";
	getline(cin,str,'\n');
	changSentences(str);
	cout<<"\n\nOutput sentences\n\n"<<str<<endl;
	
	
	system("pause");
	return 0;
}
	
	
