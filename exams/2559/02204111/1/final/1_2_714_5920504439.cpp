//5920504439Thanawan Chalermtong
#include <iostream>
using namespace std;
string ToActive(string s)
{
       string a,b,n;
       
       a=s.replace(s.find("ed",0),2,"s");
       cout<<"active:"<<a;
}
int main()
{
    string s;
    cout<<"Please input your sentence:";
    getline(cin,s);
ToActive(s);   
    



system("pause");
return 0;
}
