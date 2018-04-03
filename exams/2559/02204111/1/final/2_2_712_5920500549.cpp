// 5920500549 surapa seesa-ad
#include<iostream>
using namespace std;
string ToPassive(string s1,string s3)
{
cout<<s3<<"is"<<"by"<<s1;
 
}



int main()
{
	string s1,s2,s3,s;
	cout<<"Please input your sentence :";
	cin>>s;
	getline(cin,s1,'\n');
	getline(cin,s2,'\n');	
	getline(cin,s3,'.');
   
	ToPassive(s1,s3);
	
	system("pause");
	return 0;
}
