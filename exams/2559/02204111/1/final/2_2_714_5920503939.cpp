//5920503939 Saowapak Pohduang
#include<iostream>
using namespace std;

int main()
{
    string a,obj,vs,ved,sub;
    cout<<"Please input your sentence: ";
    getline(cin,a,'.');
    cout<<endl;
    if(a.find("s ",a.find(" ",0))!=-1)   
         {
                 obj=a.substr(0,a.find(" ",0));
                 a=a.erase(0,a.find(" ",0));
                 vs=a.substr(0,a.find("s ",0));
                 ved=vs.replace(a.find("s ",0),2,"ed ");
                 sub=a.erase(0,a.find("s ",0));
                 sub=sub.replace(0,3,"T");
                 
         cout<<"passive : "<<sub+" is"+ved+"by "+obj+"."<<endl;}
    else
         cout<<"Error: Not present simple tense."; //obj+ved+"by"+sub;
    
    system ("pause");
    return 0;
    }
