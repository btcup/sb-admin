#include <iostream>
using namespace std;
int CountThe(string s)
{
    int i=0,n=-1,sum=0;
    
    n = s.find("The ",0);
    if(n<4294967295)
    {
    s.replace(n,4,"-");
    }
    n = s.find(" the ",0);
    if(n<4294967295)
    {
    s.replace(n,5,"-");
    }
    n = s.find("THE",0);
    if(n<4294967295)
    {
    s.replace(n,3,"-");
    }
    while( i<s.size() )
    {
        if(s[i]=='-')
        sum=sum+1;
        i++;
    }
    return sum;
}    

int main()
{
    string s;
    cout<<"Enter your sentence : ";
    getline(cin,s,'\n');
    
    int sum;
    sum = CountThe(s);
    
    cout<<"There are "<<sum<<" words of 'the'.\n";
    
    system("pause");
    return 0;   
}
