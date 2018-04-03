#include<iostream>
#include<string>
using namespace std;
void strln( string a)
{cout<<"text :";
getline(cin,a,'\n');}

void strCond( string a)
{for(int i=0;i<a.size();i++)
{a[i];
if(a[i]==' '){ a.erase(a[i],1);}
else continue;}}

void Word(string a, string b )
{cout<<"Count condition: ";
getline(cin,b,'\n');
}
int main(){
string x,y;
strln(x);
strCond(x);
Word(x,y);
system("peause");
return 0;
} 
