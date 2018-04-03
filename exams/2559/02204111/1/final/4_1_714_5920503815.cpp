#include<iostream>
using namespace std;
string encryption(string s)
{
	int i,j=0;
	string y;
		cout<<"Encrypted text:";
	for(i=s.size()-1;i>=0;i--)
	{    
		 y=s[i]	;	 
		 
	cout<<y;
		 
	
		 
		 
	}
	cout<<endl;
	
	return y;
}


int main()
{
	string s,y;
	cout<<"Enter text:";
	getline(cin,s,'\n');
	
	encryption(s);
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
} 
