//5920500875 Suphakarn Luangrangsi
#include<iostream>
#include<string>
using namespace std;
string encrypted(string s)
{    
     
     string s2;
     
     
     s2=s.substr(0,s.find(" ",1));
     s=s.erase(s.find(" ",1),1);
     return s2;
}
int main()
{
    string s;
    int a,b;
    cout<<"Enter text : ";getline(cin,s,'\n');
    cout<<encrypted(s);
    cout<<endl;
    
system("pause");
return 0;
}
    
