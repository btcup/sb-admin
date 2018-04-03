//5920500514 Mr.Siwapan Nak-ai

#include <iostream>
using namespace std;
int main()
{
	string str1,str2;
	int a,b,c;
	cout<<"Enter text : ";
	getline(cin,str1,'\n');
	cout<<"Enter keyword : ";
	getline(cin,str2,'\n');
	
	
	a = str1.find(str2);
	b= str2.find("*");
	c= str2.find("*",0);
	

	if(c==0)
	{
		cout<<"Incorrect keyword!"<<endl;
	}
	else if(b>0)
	{
		cout<<"'"<<str2<<"' "<<"is in above text."<<endl;
	}
	else if(a>=0)
	{
		cout<<"'"<<str2<<"' "<<"is in above text."<<endl;
	}
	else if(a==-1)
	{
		cout<<"'"<<str2<<"' "<<"is not in above text."<<endl;
	}
	




system("pause");
return 0;	
}

