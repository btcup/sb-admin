#include<iostream>
#include<string>
using namespace std;
 string encoding(string s)
if(s=='a')
 return #141;
 if(s=='e')
 return #145;
 if(s=='i')
 return #151;
 if(s=='o')
 return #157;
 if(s=='u')
 return #165;
 
 
 
 int main ()
{
     int i;
 string sx,t,c;
 cout<<"Please enter your message :";
 getline(cin,x,'\n');
 cout<<"Your enconding message is :";
  for(i=0;i<x.size();i++)
  t=x[i];
  c=encoding(t);
  cout<<c;
system("pause");
return 0;
}
