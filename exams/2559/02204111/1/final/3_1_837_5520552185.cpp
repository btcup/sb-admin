//5520552185 Mr.Chanin Chaiya
#include<iostream>
using namespace std;
int main()
{
    char a;
    string s;
    cout<<"Enter text: ";
    cin>> s;   
    cout<<"Enter keyword: ";
    cin>>a;
    if(a=='s')
    cout<<a<<" is in above text."<<endl;
    else if ('a'!='s')
    cout<<a<<" is not in above text."<<endl;
    else
    cout<<" Incorrect Keyword! "<<endl;
    
    system("pause");
    return 0;
}
