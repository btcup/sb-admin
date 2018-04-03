//5920551402 Nuttaphon Wisanphat
#include <iostream>
using namespace std;
void ToPassive(string a, string b, string c, string d)
{
      string e;
      e= c+" "+d+" is "+b+"ed by "+a;
      cout<<"passive : "<<e<<"."<<endl;
}
int main()
{
string a,b,c,d,e,;
int i;
cout<<"Please input your sentence : ";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
i=b.find("ed",1);
if(i>=0)
cout<<"Not present simple tense."<<endl;
else 
ToPassive(a,b,c,d);

system("pause");
return 0;
} 


