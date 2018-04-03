#include<iostream>
using namespace std;
int main()
{
    string st1;
    cout<<"Please enter your message : ";
    cin>>st1;
    st1.replace('a',1,"#141");
    st1.replace('e',1,"#145");
    st1.replace('i',1,"#151");
    st1.replace('o',1,"#157");
    st1.replace('u',1,"#165");
    
    system("pause");
    return 0;
}
