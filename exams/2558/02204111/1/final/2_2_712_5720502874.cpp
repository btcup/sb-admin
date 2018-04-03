#include<iostream>
using namespace std;
int CountThe(string a,char b)
{
    string x;
    char y;
    if(y)
    {
         y =='THE'== 'The' == 'the';
    }
    int c = x.find(y,'.');
    cout<<c;
    return 0;
}
int main()
{
    int c;
    char y;
    string x;
    cout<<"Enter your sentence: ";
    cin>>x;
    CountThe(x,y);
    cout<<"There are" <<c<<"words of 'the'."<<endl;
    system("pause");
    return 0;
}
