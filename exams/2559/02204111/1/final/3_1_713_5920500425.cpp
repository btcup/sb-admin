//5920500425 Narit Chunnoi
#include <iostream>
using namespace std;
int main()
{
	string s,a;
	cout<<"Enter text: ";
	getline(cin,s,'\n');
	cout<<"Enter keyword: ";
	getline(cin,a,'\n');
	

	if(s.find(a,5))
	cout<<"'"<<a<<"'"<<" is in above text."<<endl;
	else if(s.find("s",5))
	cout<<"'"<<a<<"'"<<" is not in above text."<<endl;
	else
	cout<<"Incorrect keyword!"<<endl;
	
	
	system ("pause");
	return 0;
}
