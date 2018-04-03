#include<iostream>
#include<string>
using namespace std;
 string encryption(string l)
{
	int i,x,c ;
	string e;
	c=l.size();
	for(i=0;i<=c;i++)
	{
	  e=e+l.substr(l.size()-i,1);
    }	 
    return e;
}

int main()
{
	string a,t;
	cout<<"Enter text :";
	getline(cin,a,'\n');
	t=encryption(a);
    cout<<"Encrypted text :"<<t;

	cout<<endl;
	

system("pause");
return 0;
}
