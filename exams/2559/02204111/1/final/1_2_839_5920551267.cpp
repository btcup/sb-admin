//5920551267 Kitchapoln Tunnitisupawong
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string d;
    cout<<"Please input your sentence:";
    getline(cin,d,'.');
    if(d.find('is',0))
    cout<<"active : ";
    else
    cout<<"error : Verb to be (is) not found";
    
    
    system("pause");
    return 0;
}
