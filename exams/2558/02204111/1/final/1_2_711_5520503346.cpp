#include<iostream>
using namespace std;
int main()
{
    int a;
    string s;
    cout<<"Input sentences:";
    cin>>s;
    cout<<"Output sentences:"<<endl;
    cout<<s;
    getline(cin,s,'\n');
    cout<<s;
    cout<<endl;
    
    system("pause");
    return 0;
}
