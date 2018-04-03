#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Input sentences:";
    cin>>str;
    getline(cin,str,'\n');
    string changeSentences(0,1);
    {
    cout<<"Output sentences:"<<endl;
    cout<<str;
    }
    system ("pause");
    return 0;
}
