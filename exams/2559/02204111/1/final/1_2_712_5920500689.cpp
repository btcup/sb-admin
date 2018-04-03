//5920500689 chanon ponchai
#include <iostream>
using namespace std;

void ToActive(string str2)
{
	int x;
	x=str2.find("is",1);
	if (x!=-1)
	cout<<"Error: Verb to be (be) not found";
	
}
int main()
{
	string str1;
	cout<<"Please input your sentence:";
	cin>>str1;
 	ToActive(str1);
	cout<<ToAtive(str1);
	return 0;
}

