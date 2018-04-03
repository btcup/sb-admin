#include<iostream>
using namespace std;
void changeSentences(string s)
{
     s.replace( s.find(".",0),1,"Y");
     cout<<"Output :"<<endl<<s<<endl;
     
}

int main()
{
   string s;
   cout<<"Input sentences :"<<endl;
   getline(cin,s,'\n');
   changeSentences(s);
system("pause");
}
