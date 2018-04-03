// Ponlawit Archawaphakdee 5920500476
#include<iostream>
using namespace std;
int main()
{
string s, sub,v,obj;
int a,b,c,d;
cout<<"plase in put your sentense : ";
getline(cin,s,'\n');
a=s.find("is",0);
b=s.find("ed",0);
c=s.find('.',0);
d=s.find("by",0);

sub=s.substr(0,a-1);
v=s.substr(a+1,b-1);
obj=s.substr(d+2,c);

if (a==0)
cout<<"Eror : Verb to be (is) not found";
else
cout<<"active : "<<obj+v+"s"+sub+".";
system("pause");
return 0;
}
