#include <iostream>
using namespace std;
    int CountThe(string x,string y)
    {
    int z=0,i;
    t=x.find(0,y)
    if(t>0)
    z++;
    }
    return z;
}        
int main()
{
    string s,a;
    int w;
    cout<<"Enter your sentence : ";
    getline(cin,s,'\n');
    a="The";
    w=CountThe(s,a);
    cout<<"There are "<<w<<" words of 'the'"<<endl;
    system ("pause");
    return 0;
}
