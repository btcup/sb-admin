#include<iosteam>
using namespace std;
string Encoding(string s)
{
    a = s.replace(x.find(a,0),1,#141)
    e = s.replace(x.find(e,0),1,#145)
    i = s.replace(x.find(i,0),1,#151)
    o = s.replace(x.find(o,0),1,#157)
    u = s.replace(x.find(u,0),1,#165)
    return s;
}    

int main()
{
    string x;
    cout<<"Please enter your message: ";
    getline(cin,x,\n);
    x = Encoding(string s);
    cout<<"Your encoding message is: "<<x;

system("pause");
return 0;
}
