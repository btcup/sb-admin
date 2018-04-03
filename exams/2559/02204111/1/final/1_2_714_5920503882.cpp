#include<iostream>
using namespace std;
int main()
{
    int n,i;
    string str1,str2 ;
    cout<<"Please input your sentence:";
    getline(cin,str1,'\n');
    while(1)
    {
    if(str1.find("is",i)==-1)
    break;
    i=str1.find("is",i);
    str1.erase(i+2);
    i++;
}
while(1)
    {
    if(str1.find("ed",n)==-1)
    break;
    n=str1.find("ed",n);
    str1.erase(n+2);
    n++;
}
cout<<"active:"<<i<<endl;
cout<<"Error:"<<n<<endl;   
    
    system ("pause");
    return 0;
}
