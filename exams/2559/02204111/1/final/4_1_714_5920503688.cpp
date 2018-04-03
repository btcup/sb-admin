#include <iostream>   
using namespace std;

char encryption (string text)
{
     string y;
     int i,n=1;
     for (i=text.length();i>=0;i--)
     {
         y = y + ' ' + text[n];
         n++;
     }
     return y;
}

int main()
{
    string text,x;
    int i,n=1;
    cout<<"Enter text: "; //5920503688
    cin>>text;
    
    for (i=0;i<text.length();i++)
    {
        text[n] = text.substr(text.find(' '),text.find(' '));
        n++;
    }
    x = encryption (text);
    cout<<"Encrypted text: "<<x;
    
    system("pause");
    return 0;
}
