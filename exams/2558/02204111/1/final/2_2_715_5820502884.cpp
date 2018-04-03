#include <iostream>
using namespace std;

int main()
{
    int n,n1,n2,n3;
    string s;
    char t;
    cout<<"Enter your sentence : ";
    getline(cin,s,'\n');  
    if (t ='The')
    n1 = s.find(s,'The');
    else if (t='THE')
    n2 = s.find(s,'THE');
    else if (t='the')
    n3 = s.find(s,'the');
    n = n1+n2+n3;
    cout<<"There are "<<n<<" words of 'the'.";
    cout<<endl;
    system("pause");
    return 0;    
}
    
