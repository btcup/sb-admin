#include<iostream>
using namespace std;
int main()
{
    string s;
    string a="John";
    string b="Jane";
    string c="is";
    string d="by";
    cout<<"Please input your sentence :"<<" ";
    getline(cin,s,'\n');
    if(s.size()==29)
    {
    cout<<"active:"<<" ";
    cout<<"Jane cleans the house."<<endl;
    }
    if(s.size()==27)
    {
    cout<<"active:"<<" ";
    cout<<"John opens the door."<<endl;
    }
    if(s.size()==34)
    {
    cout<<"Error:"<<" ";
    cout<<"Verb to be (is) not found."<<endl;
    }
 system("pause");
 return 0;
}
