#include<iostream>
using namespace std;

int main()
{
    int z;
    string s1,s2,s3,s4,s5,s,y;
    s1='#141';
    s2='#145';
    s3='#151';
    s4='#157';
    s5='#165';
    cout<<"Please enter your message:";
    cin>>s;
    s.replace(s.find('u',0),1,s1);
    cout<<"Your encoding message is:"<<s<<endl; 

system ("pause");
return 0;
}
