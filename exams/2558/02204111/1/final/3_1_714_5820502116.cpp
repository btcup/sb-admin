#include <iostream>
using namespace std;

string Encoding(string s)
{
   if (string s == "a")
   cout<<s.replace(0,1,"141")<<endl;
   else if (string s == "e")
   cout<<s.replace(0,1,"145")<<endl;
   else if (string s == "i")
   cout<<s.replace(0,1,"151")<<endl;
   else if (string s == "o")
   cout<<s.replace(0,1,"157")<<endl;
   else if (string s == "u")
   cout<<s.replace(0,1,"165")<<endl;
  return s;
}
 int main ()
 {
    string s;
    cout<<"Please enter your message :";
    cin>>s;
    Encoding s();
    cout<<"Your encording message is:"<<s<<endl;
}
system("pause");
return 0;

}
   
