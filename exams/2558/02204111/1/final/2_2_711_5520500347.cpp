#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number,a,b,c;
    string str1,str2,str3,str4,str5;
    cout<<"Enter your sentence :";
    cin>>str1;
    str2="the";
    str3="THE";
    str4="The";
    a=str1.find(str2);
    b=str1.find(str3);
    c=str1.find(str4);
    if(a>-1||b>-1||c>-1)

    number=str1.size();
    cout<<"There are "<<number<<" words or 'the'."<<endl;
    
system("pause");
return 0;
}
