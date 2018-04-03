//5920502983 Kasem Puchang
#include <iostream>
using namespace std;
int main()
{
    string x;
    int i,j,k,l;
    cout<<"Please input your sentence :";
    getline (cin,x);
    for (i=0;i<x.length();i--)
    {
        j = x.find("s",0);
        if (j!=-1)
        {
                  x.erase(i+4,1);
                  x.insert(i+4,"ed");
        }
        cout<<x;
    }
    cout<<endl;
    system ("pause");
    return 0;
}

    
