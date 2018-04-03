#include <iostream>
using namespace std;
void Encoding(string s);
     char ch;
     int i,length();
     string s[10];
     for(i=0;i<s.length();i++)
     {
         if(s[i]=='a')
         s.replace(i,1,#141)
         if(s[i]=='e')
         s.replace(i,1,#145)
         if(s[i]=='i')
         s.replace(i,1,#151)
         if(s[i]=='o')
         s.replace(i,1,#157)
         if(s[i]=='u')
         s.replace(i,1,#165)
     }
     cout<<s<<endl;
     return s;
int main()
{
    string s[10];
    cout<<"Please enter your message:";
    cin>> s;
    Encoding(string s);
    cout<<"Your encoding message is:"<<s<<endl;
    system ("pause");
    return 0;
}
