#include<iostream>
using namespace std;
string encryption(string s)
{
	string t ;
	for( int i = s.size()-1 ; i >= 0 ; i-- )
		t = t + s[i] ;
		
	return t;
}
int main()
{
	string s , t ;
	int pos ;
	cout<<"Enter text : ";
	for( int i = 0 ; i < 4 ; i++ )
	{
		getline(cin,s,' ');
		s = encryption(s);
		t = t + s + " ";
	}
	cout<<"Encrypted text : "<<t;
	
return 0;	
}
