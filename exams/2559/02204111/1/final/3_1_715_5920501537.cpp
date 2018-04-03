//5920501537	Thanot Wasuntararat

#include<iostream>
using namespace std;
void mySearch(string a,string b)
{
	int c,d,i,j,k;
	c=a.find(b);
	for(i=1;i<b.length();i++)
	{
		if(b[i]=='*')
		{
		j=a.find(b[i]);
		if(j!=-1)
		k=1;
		}
		else
		{
	
		}
	}
	if(b[0]=='*')
	cout<<"Incorrect key word ! "<<endl;
	else if(c==-1)
	cout<<"'"+b+"' is not in above text. "<<endl;
	else if(k==1)
 	cout<<"'"+b+"' is in above text. "<<endl;
	else
	cout<<"'"+b+"' is in above text. "<<endl;
}
int main()
{
	string a,b;
	cout<<"Enter text : ";
	getline(cin,a,'\n');
	cout<<"Enter keyword : ";
	getline(cin,b,'\n');
	mySearch(a,b);
	system("pause");
	return 0;
}
