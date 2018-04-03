#include<iostream>
using namespace std;
int CountThe(string a)
{   int A,B,C,N;
    string t="the",Th="The",T="THE";
    A=a.find(t);
    B=a.find(Th);
    C=a.find(T);
    N=A+B+C;
    return N;
}
int main()
{
    string Name;
    cout<<"Enter your sentence :";
    getline(cin,Name,'\n');
    cout<<"There are "<<CountThe(Name)<<" words of 'the'."<<endl;
    system("pause");
    
}
