#include<iostream>
using namespace std;

void Topassive(string y)
{
    string y,sud,obj,verb;
    sub=y.find("");
    Obj=y.find(".");
    verb=y.find("s");
    cout<<"passive:"<<obj<<""<<"is"<<""<<verb<<""<<sub<<"."<<endl;
}
int main()
{
    string senten,x;
    cout<<"Plase input your sentence:";
    cin>>senten;
    x=Topassive(senten);
    
    system("pause")
    return 0;
}
