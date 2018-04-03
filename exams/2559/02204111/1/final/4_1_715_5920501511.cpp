#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,str;
    int a;
    cout<<"Enter text:";
    getline(cin,str,'\n');
    a=str.size();
    
    cout<<"Encrypted text:"<<str<<endl<<str.find(a,1);
    //<<str.find(a,str.size())
    system("pause");
    return 0;
}
