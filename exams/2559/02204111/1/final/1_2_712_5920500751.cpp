#include<iostream>
using namespace std;
void ToActive(string s)
{
	
	
	
}
int main()
{
	int x;
	
	string s,y;
	cout<<"Please in put your sentence : ";
	getline(cin,s,' ')
     for(int i=0;i<s.length();i++)
     {
     	x=s.find(0," ");
     	y=s.substr(0,x);
     	 ToActive(y);
     	 s=s.erase(0,x);
     }
	system("pause"); 
	return 0;
}
