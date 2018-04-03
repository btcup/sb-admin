#include<iostream>
using namespace std;
int main ()
{
    string str1,str2,str3;
    str2="the&&The&&THE";
    
    cout<<"Enter your sentence:";
    cin>>str1;
    str3=str2.find(str1,0);
    
    cout<<"There are"<<" "<<str3.size()<<"  words of"<<"'the'"<<endl; 
    
    
    system("pause");
    return 0;
}
