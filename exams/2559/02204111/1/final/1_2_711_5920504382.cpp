//5920504382 Chatchawat Chatwongphun
#include<iostream>
using namespace std;
string ToActive(string s)
{
  int i,n,m,o;
  string a,b,c,d,e;
  if(s.find("is",0)!=-1)
  {   i=s.find("is",0);
      a=s.substr(0,i-1);
      n=i+2;
    if(s.find("ed",n)!=-1)
  {
     m= s.find("ed by",n);
     
     
     o=m+5;
     b=s.substr(o,s.size()-1);
     c= s.replace(m,o,"s");
     
     d=b+c+a;
  }
  }
  else if(s.find("is",0)==-1)
  {
      cout<<"Error: Verb to be (is) not found."<<endl;      
  }
  //The door is opened by john.
  
  return d;
}
int main()
{


string string,s,str2;
cout<<"Please input your sentence: ";
getline(cin,string,'.');
str2=ToActive(string);
cout<<str2;

system("pause");
return 0;
}
