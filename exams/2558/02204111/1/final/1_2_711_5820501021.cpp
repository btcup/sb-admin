#include<iostream>
using namespace std;
string changeSentences(string str)
{  int i;
       str[0]=str[0]-32;
   if(str[i-1]=='?'&&str[i-1]=='.')
   { str[i]=str[i]-32;}
   return str;
}
int main()
{
    string str;
    cout<<"Input sentences: ";
    getline(cin,str,'\n');
    cout<<"Output sentances: "<<endl;
    cout<<endl;
    cout<<changeSentences(str)<<endl;
    system("pause");
    return 0;
}













