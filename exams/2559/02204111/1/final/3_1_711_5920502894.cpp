//5920502894 wikran tantiphokha
#include <iostream>
using namespace std;
void mySearch(string a,string b)
{
    string x;
    int y;
    y=b.length();
    x=a.substr(a.find(b,0),y);
    cout<<"'"<<b<<"' is in above text."<<endl;                
}
int main()
{
    string a,b;
    cout<<"Enter text: ";
    getline(cin,a,'\n');
    cout<<"Enter keyword: ";
    getline(cin,b,'\n');
    mySearch(a,b);
    system("pause");
    return 0;
}
